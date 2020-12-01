#include "openvision_procfs.h"

struct file* file_open(const char* path, int flags, int rights) {
	struct file* filp = NULL;
	mm_segment_t oldfs;
	int err = 0;

	oldfs = get_fs();
#if LINUX_VERSION_CODE < KERNEL_VERSION(5,1,0)
	set_fs(get_ds());
#else
	set_fs(KERNEL_DS);
#endif
	filp = filp_open(path, flags, rights);
	set_fs(oldfs);

	if (IS_ERR(filp))
	{
		err = PTR_ERR(filp);

		return NULL;
	}

	return filp;
}

void file_close(struct file* file)
{
	if (file != NULL)
	{
		filp_close(file, NULL);
	}
}

int file_read(struct file* file, unsigned char* data, unsigned int size)
{
	mm_segment_t oldfs;
	int ret;

	oldfs = get_fs();
#if LINUX_VERSION_CODE < KERNEL_VERSION(5,1,0)
	set_fs(get_ds());
#else
	set_fs(KERNEL_DS);
#endif
#if LINUX_VERSION_CODE < KERNEL_VERSION(4,14,0)
	ret = vfs_read(file, data, size, &file->f_pos);
#else
	ret = kernel_read(file, data, size, &file->f_pos);
#endif
	set_fs(oldfs);

	return ret;
}

int file_write(struct file* file, unsigned char* data, unsigned int size)
{
	mm_segment_t oldfs;
	int ret;

	oldfs = get_fs();
#if LINUX_VERSION_CODE < KERNEL_VERSION(5,1,0)
	set_fs(get_ds());
#else
	set_fs(KERNEL_DS);
#endif
#if LINUX_VERSION_CODE < KERNEL_VERSION(4,14,0)
	ret = vfs_write(file, data, size, &file->f_pos);
#else
	ret = kernel_write(file, data, size, &file->f_pos);
#endif
	set_fs(oldfs);

	return ret;
}

int remove_file(char *path)
{
	mm_segment_t oldfs;
	int ret;
	struct path ndpath;
	struct dentry *dentry;

	oldfs = get_fs();
#if LINUX_VERSION_CODE < KERNEL_VERSION(5,1,0)
	set_fs(get_ds());
#else
	set_fs(KERNEL_DS);
#endif

	ret = kern_path(path, LOOKUP_PARENT, &ndpath);
	if (ret != 0)
	{
		return -ENOENT;
	}

	dentry = lookup_one_len(path, ndpath.dentry, strlen(path));
	if (IS_ERR(dentry))
	{
		return -EACCES;
	}

	vfs_unlink(ndpath.dentry->d_inode, dentry,NULL);
	dput(dentry);

	set_fs(oldfs);

	return ret;
}

int save_data_to_file(char *path, int flags, char *data, int size)
{
	struct file *fp = NULL;

	fp = file_open(path, flags, 0);
	if (fp != NULL)
	{
		file_write(fp, data, size);
		file_close(fp);

		return 0;
	}

	return -1;
}

char * dirname(char * name)
{
	static char path[100];
	int i = 0;
	int pos = 0;

	while ((name[i] != 0) && (i < sizeof(path)))
	{
		if (name[i] == '/')
			pos = i;

		path[i] = name[i];
		i++;
	}

	path[i] = 0;
	path[pos] = 0;

	return path;
}

char * basename(char * name)
{
	int i = 0;
	int pos = 0;

	while (name[i] != 0)
	{
		if (name[i] == '/')
			pos = i;

		i++;
	}

	if (name[pos] == '/')
		pos++;

	return name + pos;
}

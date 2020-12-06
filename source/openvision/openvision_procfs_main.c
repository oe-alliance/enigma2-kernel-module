#include "openvision_procfs.h"

struct ProcStructure_s ovProc[] =
{
	{cProcDir, "openvision", NULL, NULL, NULL, NULL, ""},
	{cProcEntry, "openvision/model", NULL, get_ov_model, NULL, NULL, ""},
	{cProcEntry, "openvision/brand", NULL, get_ov_brand, NULL, NULL, ""},
	{cProcEntry, "openvision/platform", NULL, get_ov_platform, NULL, NULL, ""},
	{cProcEntry, "openvision/visionversion", NULL, get_ov_visionversion, NULL, NULL, ""},
	{cProcEntry, "openvision/visionrevision", NULL, get_ov_visionrevision, NULL, NULL, ""},
	{cProcEntry, "openvision/visionlanguage", NULL, get_ov_visionlanguage, NULL, NULL, ""},
	{cProcEntry, "openvision/developername", NULL, get_ov_developername, NULL, NULL, ""},
	{cProcEntry, "openvision/feedsurl", NULL, get_ov_feedsurl, NULL, NULL, ""},
	{cProcEntry, "openvision/distro", NULL, get_ov_distro, NULL, NULL, ""},
	{cProcEntry, "openvision/oe", NULL, get_ov_oe, NULL, NULL, ""},
	{cProcEntry, "openvision/kernel", NULL, get_ov_kernel, NULL, NULL, ""},
	{cProcEntry, "openvision/python", NULL, get_ov_python, NULL, NULL, ""},
	{cProcEntry, "openvision/mediaservice", NULL, get_ov_mediaservice, NULL, NULL, ""},
	{cProcEntry, "openvision/multilib", NULL, get_ov_multilib, NULL, NULL, ""},
	{cProcEntry, "openvision/architecture", NULL, get_ov_architecture, NULL, NULL, ""},
	{cProcEntry, "openvision/socfamily", NULL, get_ov_socfamily, NULL, NULL, ""},
	{cProcEntry, "openvision/blindscanbinary", NULL, get_ov_blindscanbinary, NULL, NULL, ""},
	{cProcEntry, "openvision/rctype", NULL, get_ov_rctype, NULL, NULL, ""},
	{cProcEntry, "openvision/rcname", NULL, get_ov_rcname, NULL, NULL, ""},
	{cProcEntry, "openvision/rcidnum", NULL, get_ov_rcidnum, NULL, NULL, ""},
	{cProcEntry, "openvision/smallflash", NULL, get_ov_smallflash, NULL, NULL, ""},
	{cProcEntry, "openvision/middleflash", NULL, get_ov_middleflash, NULL, NULL, ""},
	{cProcEntry, "openvision/imagedir", NULL, get_ov_imagedir, NULL, NULL, ""},
	{cProcEntry, "openvision/imagefs", NULL, get_ov_imagefs, NULL, NULL, ""},
	{cProcEntry, "openvision/mtdbootfs", NULL, get_ov_mtdbootfs, NULL, NULL, ""},
	{cProcEntry, "openvision/mtdrootfs", NULL, get_ov_mtdrootfs, NULL, NULL, ""},
	{cProcEntry, "openvision/mtdkernel", NULL, get_ov_mtdkernel, NULL, NULL, ""},
	{cProcEntry, "openvision/rootfile", NULL, get_ov_rootfile, NULL, NULL, ""},
	{cProcEntry, "openvision/kernelfile", NULL, get_ov_kernelfile, NULL, NULL, ""},
	{cProcEntry, "openvision/mkubifs", NULL, get_ov_mkubifs, NULL, NULL, ""},
	{cProcEntry, "openvision/ubinize", NULL, get_ov_ubinize, NULL, NULL, ""},
	{cProcEntry, "openvision/forcemode", NULL, get_ov_forcemode, NULL, NULL, ""}
};

struct proc_dir_entry * find_proc_dir(char * name)
{
	int i;

	for (i = 0; i < sizeof(ovProc) / sizeof(ovProc[0]); i++)
	{
		if ((ovProc[i].type == cProcDir) && (strcmp(name, ovProc[i].name) == 0))
			return ovProc[i].entry;
	}

	return NULL;
}

static int ovprocfs_show(struct seq_file *m, void* data)
{
	int bytes = 0;
	char bufferfile[MAX_CHAR_LENGTH];
	struct ProcWriteInfo *proc_info = m->private;
	seq_printf(m, "\n");

	bytes = sprintf(bufferfile, "ovprocfs_show : proc_info->proc_i = %d\n", proc_info->proc_i);

	return 0;
}

static int ovprocfs_open(struct inode *inode, struct file *file)
{
	struct ProcWriteInfo *proc_info;
	int i;
	char *path, *ptr = NULL, *ovProc_fpath = NULL;

	proc_info = kmalloc(sizeof(struct ProcWriteInfo), GFP_KERNEL);
	if (proc_info == NULL)
		return -ENOMEM;

	path = kmalloc(PAGE_SIZE, GFP_KERNEL);
	ovProc_fpath = kmalloc(PAGE_SIZE, GFP_KERNEL);
#if LINUX_VERSION_CODE < KERNEL_VERSION(2,6,26)
	ptr = d_path(file->f_dentry, file->f_vfsmnt, path, PAGE_SIZE);
#else
	ptr = d_path(&file->f_path, path, PAGE_SIZE);
#endif
	proc_info->proc_i = -EPERM;

	for (i = 0; i < sizeof(ovProc) / sizeof(ovProc[0]); i++)
	{
		int bytes = 0;
		char buffer[MAX_CHAR_LENGTH];

		sprintf(ovProc_fpath, "/proc/%s", ovProc[i].name);

		bytes = sprintf(buffer, "ovProc : file->f_mode = %d / %s / %s == %s\n", file->f_mode, ovProc[i].name, ptr, ovProc_fpath);

//		if (ovProc[i].type == cProcEntry && strstr(ptr, ovProc[i].name))
		if (ovProc[i].type == cProcEntry && !strcmp(ptr, ovProc_fpath))
		{
			proc_info->proc_i = i;
			proc_info->count = -EPERM;

			if (file->f_mode & FMODE_READ)
			{
				if (ovProc[i].read_proc != NULL)
				{
					if (ovProc[i].proc_info != NULL)
					{
						proc_info = ovProc[i].proc_info;
					}

					return single_open(file, ovProc[i].read_proc, proc_info);
				}

				return single_open(file, ovprocfs_show, proc_info);
			}
			else if (file->f_mode & FMODE_WRITE)
			{
				if (ovProc[i].write_proc == NULL)
				{
					proc_info->proc_i = -EPERM;
				}

				file->private_data = proc_info;
			}

			break;
		}
	}

	return 0;
}

static ssize_t ovprocfs_write(struct file *file, const char __user *ubuf,
			       size_t count, loff_t *ppos)
{
	struct ProcWriteInfo *proc_info = file->private_data;
	char *kbuf;

	kbuf = kmalloc(count + 1, GFP_KERNEL);
	if (!kbuf)
		return -ENOMEM;

	if (copy_from_user(kbuf, ubuf, count)) {
		count = -EFAULT;
	}
	else
	{
		kbuf[count] = '\0'; /* Just to make sure... */

		if (proc_info->proc_i >= 0)
		{
			int proc_i = proc_info->proc_i;

			proc_info->ubuf = ubuf;
			proc_info->count = count;
			ovProc[proc_i].write_proc(proc_info, kbuf);
			ovProc[proc_i].proc_info = proc_info;
		}
	}

	return count;
}

static unsigned int ovprocfs_poll(struct file *file,
				   struct poll_table_struct *wait)
{
	unsigned int mask = 0;

#ifdef DEBUG
	printk(KERN_DEBUG "ovprocfs: poll called (unimplemented)\n");
#endif

	return mask;
}

static int ovprocfs_release(struct inode *inode, struct file *file)
{
//	struct ProcWriteInfo *proc_info = file->private_data;

#ifdef DEBUG
	printk(KERN_DEBUG "ovprocfs: release called\n");
#endif
//	kfree(proc_info);

	return 0;
}

#if LINUX_VERSION_CODE >= KERNEL_VERSION(5,6,0)
static const struct proc_ops ovprocfs_fops = {
	.proc_open	= ovprocfs_open,
	.proc_read	= seq_read,
	.proc_write	= ovprocfs_write,
	.proc_lseek	= no_llseek,
	.proc_poll	= ovprocfs_poll,
	.proc_mmap	= NULL,
	.proc_release	= ovprocfs_release,
};
#else
static const struct file_operations ovprocfs_fops = {
	.owner		= THIS_MODULE,
	.open		= ovprocfs_open,
	.read		= seq_read,
	.write		= ovprocfs_write,
	.llseek	= no_llseek,
	.poll		= ovprocfs_poll,
	.mmap		= NULL,
	.release	= ovprocfs_release,
};
#endif
void ov_kernel_info(void)
{
	printk(KERN_INFO "model=@MACHINE@\n");
	printk(KERN_INFO "brand=@BOX_BRAND@\n");
	printk(KERN_INFO "platform=@STB_PLATFORM@\n");
	printk(KERN_INFO "visionversion=@VISIONVERSION@\n");
	printk(KERN_INFO "visionrevision=@VISIONREVISION@\n");
	printk(KERN_INFO "visionlanguage=@VISIONLANGUAGE@\n");
	printk(KERN_INFO "developername=@DEVELOPER_NAME@\n");
	printk(KERN_INFO "feedsurl=@DISTRO_FEED_URI@\n");
	printk(KERN_INFO "distro=@DISTRO_NAME@\n");
	printk(KERN_INFO "oe=@BUILD_VERSION@\n");
	printk(KERN_INFO "kernel=@KERNELVERSION@\n");
	printk(KERN_INFO "python=@PREFERRED_VERSION_python@\n");
	printk(KERN_INFO "mediaservice=@PREFERRED_PROVIDER_virtual/enigma2-mediaservice@\n");
	printk(KERN_INFO "multilib=@HAVE_MULTILIB@\n");
	printk(KERN_INFO "architecture=@DEFAULTTUNE@\n");
	printk(KERN_INFO "socfamily=@SOC_FAMILY@\n");
	printk(KERN_INFO "blindscanbinary=@BLINDSCAN_BINARY@\n");
	printk(KERN_INFO "rctype=@RCTYPE@\n");
	printk(KERN_INFO "rcname=@RCNAME@\n");
	printk(KERN_INFO "rcidnum=@RCIDNUM@\n");
	printk(KERN_INFO "smallflash=@HAVE_SMALLFLASH@\n");
	printk(KERN_INFO "middleflash=@HAVE_MIDDLEFLASH@\n");
	printk(KERN_INFO "imagedir=@IMAGEDIR@\n");
	printk(KERN_INFO "imagefs=@IMAGE_FSTYPES@\n");
	printk(KERN_INFO "mtdbootfs=@MTD_BOOTFS@\n");
	printk(KERN_INFO "mtdrootfs=@MTD_ROOTFS@\n");
	printk(KERN_INFO "mtdkernel=@MTD_KERNEL@\n");
	printk(KERN_INFO "rootfile=@ROOTFS_FILE@\n");
	printk(KERN_INFO "kernelfile=@KERNEL_FILE@\n");
	printk(KERN_INFO "mkubifs=@MKUBIFS_ARGS@\n");
	printk(KERN_INFO "ubinize=@UBINIZE_ARGS@\n");
	printk(KERN_INFO "forcemode=@FORCE@\n");
}

static int __init ovprocfs_init_module(void)
{
	int i;
	char *path;
	char *name;
	ov_kernel_info();

	for (i = 0; i < sizeof(ovProc) / sizeof(ovProc[0]); i++)
	{
		path = dirname(ovProc[i].name);
		name = basename(ovProc[i].name);

		switch (ovProc[i].type)
		{
			case cProcDir:
				ovProc[i].entry = proc_mkdir(name, find_proc_dir(path));

				if (ovProc[i].entry == NULL)
				{
					printk("%s(): could not create entry %s\n", __func__, ovProc[i].name);
				}

				break;
			case cProcEntry:
#if LINUX_VERSION_CODE < KERNEL_VERSION(3,10,0)
				ovProc[i].entry = create_proc_entry(
					(strcmp("bus", path) == 0) ? ovProc[i].name : name,
					0,
					(strcmp("bus", path) == 0) ? NULL : find_proc_dir(path)
				);
#else
				ovProc[i].entry = proc_create(
					(strcmp("bus", path) == 0) ? ovProc[i].name : name,
					0,
					(strcmp("bus", path) == 0) ? NULL : find_proc_dir(path),
					&ovprocfs_fops
				);
#endif
				break;
			default:
				printk("%s(): invalid type %d\n", __func__, ovProc[i].type);
		}
	}

	return 0;
}

module_init(ovprocfs_init_module);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Open Vision developers");
MODULE_DESCRIPTION("Open Vision information");

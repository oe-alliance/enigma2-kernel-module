#include "openvision_procfs.h"

#define OV_PROC_PERMISSION 0444

struct ProcStructure_s ovProc[] =
{
	{cProcDir, "openvision", NULL, NULL, NULL, NULL, ""},
	{cProcEntry, "openvision/model", OV_PROC_PERMISSION, get_ov_model, NULL, NULL, ""},
	{cProcEntry, "openvision/brand", OV_PROC_PERMISSION, get_ov_brand, NULL, NULL, ""},
	{cProcEntry, "openvision/platform", OV_PROC_PERMISSION, get_ov_platform, NULL, NULL, ""},
	{cProcEntry, "openvision/visionversion", OV_PROC_PERMISSION, get_ov_visionversion, NULL, NULL, ""},
	{cProcEntry, "openvision/visionrevision", OV_PROC_PERMISSION, get_ov_visionrevision, NULL, NULL, ""},
	{cProcEntry, "openvision/visionlanguage", OV_PROC_PERMISSION, get_ov_visionlanguage, NULL, NULL, ""},
	{cProcEntry, "openvision/developername", OV_PROC_PERMISSION, get_ov_developername, NULL, NULL, ""},
	{cProcEntry, "openvision/feedsurl", OV_PROC_PERMISSION, get_ov_feedsurl, NULL, NULL, ""},
	{cProcEntry, "openvision/distro", OV_PROC_PERMISSION, get_ov_distro, NULL, NULL, ""},
	{cProcEntry, "openvision/oe", OV_PROC_PERMISSION, get_ov_oe, NULL, NULL, ""},
	{cProcEntry, "openvision/kernel", OV_PROC_PERMISSION, get_ov_kernel, NULL, NULL, ""},
	{cProcEntry, "openvision/python", OV_PROC_PERMISSION, get_ov_python, NULL, NULL, ""},
	{cProcEntry, "openvision/mediaservice", OV_PROC_PERMISSION, get_ov_mediaservice, NULL, NULL, ""},
	{cProcEntry, "openvision/multilib", OV_PROC_PERMISSION, get_ov_multilib, NULL, NULL, ""},
	{cProcEntry, "openvision/architecture", OV_PROC_PERMISSION, get_ov_architecture, NULL, NULL, ""},
	{cProcEntry, "openvision/socfamily", OV_PROC_PERMISSION, get_ov_socfamily, NULL, NULL, ""},
	{cProcEntry, "openvision/blindscanbinary", OV_PROC_PERMISSION, get_ov_blindscanbinary, NULL, NULL, ""},
	{cProcEntry, "openvision/rctype", OV_PROC_PERMISSION, get_ov_rctype, NULL, NULL, ""},
	{cProcEntry, "openvision/rcname", OV_PROC_PERMISSION, get_ov_rcname, NULL, NULL, ""},
	{cProcEntry, "openvision/rcidnum", OV_PROC_PERMISSION, get_ov_rcidnum, NULL, NULL, ""},
	{cProcEntry, "openvision/smallflash", OV_PROC_PERMISSION, get_ov_smallflash, NULL, NULL, ""},
	{cProcEntry, "openvision/middleflash", OV_PROC_PERMISSION, get_ov_middleflash, NULL, NULL, ""},
	{cProcEntry, "openvision/imagedir", OV_PROC_PERMISSION, get_ov_imagedir, NULL, NULL, ""},
	{cProcEntry, "openvision/imagefs", OV_PROC_PERMISSION, get_ov_imagefs, NULL, NULL, ""},
	{cProcEntry, "openvision/mtdbootfs", OV_PROC_PERMISSION, get_ov_mtdbootfs, NULL, NULL, ""},
	{cProcEntry, "openvision/mtdrootfs", OV_PROC_PERMISSION, get_ov_mtdrootfs, NULL, NULL, ""},
	{cProcEntry, "openvision/mtdkernel", OV_PROC_PERMISSION, get_ov_mtdkernel, NULL, NULL, ""},
	{cProcEntry, "openvision/rootfile", OV_PROC_PERMISSION, get_ov_rootfile, NULL, NULL, ""},
	{cProcEntry, "openvision/kernelfile", OV_PROC_PERMISSION, get_ov_kernelfile, NULL, NULL, ""},
	{cProcEntry, "openvision/mkubifs", OV_PROC_PERMISSION, get_ov_mkubifs, NULL, NULL, ""},
	{cProcEntry, "openvision/ubinize", OV_PROC_PERMISSION, get_ov_ubinize, NULL, NULL, ""},
	{cProcEntry, "openvision/forcemode", OV_PROC_PERMISSION, get_ov_forcemode, NULL, NULL, ""},
	{cProcEntry, "openvision/compiledate", OV_PROC_PERMISSION, get_ov_compiledate, NULL, NULL, ""},
	{cProcEntry, "openvision/fpu", OV_PROC_PERMISSION, get_ov_fpu, NULL, NULL, ""},
	{cProcEntry, "openvision/displaytype", OV_PROC_PERMISSION, get_ov_displaytype, NULL, NULL, ""},
	{cProcEntry, "openvision/transcoding", OV_PROC_PERMISSION, get_ov_transcoding, NULL, NULL, ""},
	{cProcEntry, "openvision/multitranscoding", OV_PROC_PERMISSION, get_ov_multitranscoding, NULL, NULL, ""},
	{cProcEntry, "openvision/hdmi", OV_PROC_PERMISSION, get_ov_hdmi, NULL, NULL, ""},
	{cProcEntry, "openvision/yuv", OV_PROC_PERMISSION, get_ov_yuv, NULL, NULL, ""},
	{cProcEntry, "openvision/rca", OV_PROC_PERMISSION, get_ov_rca, NULL, NULL, ""},
	{cProcEntry, "openvision/avjack", OV_PROC_PERMISSION, get_ov_avjack, NULL, NULL, ""},
	{cProcEntry, "openvision/scart", OV_PROC_PERMISSION, get_ov_scart, NULL, NULL, ""},
	{cProcEntry, "openvision/dvi", OV_PROC_PERMISSION, get_ov_dvi, NULL, NULL, ""},
	{cProcEntry, "openvision/svideo", OV_PROC_PERMISSION, get_ov_svideo, NULL, NULL, ""},
	{cProcEntry, "openvision/hdmihdin", OV_PROC_PERMISSION, get_ov_hdmihdin, NULL, NULL, ""},
	{cProcEntry, "openvision/hdmifhdin", OV_PROC_PERMISSION, get_ov_hdmifhdin, NULL, NULL, ""},
	{cProcEntry, "openvision/wol", OV_PROC_PERMISSION, get_ov_wol, NULL, NULL, ""},
	{cProcEntry, "openvision/ci", OV_PROC_PERMISSION, get_ov_ci, NULL, NULL, ""},
	{cProcEntry, "openvision/vfdsymbol", OV_PROC_PERMISSION, get_ov_vfdsymbol, NULL, NULL, ""},
	{cProcEntry, "openvision/fhdskin", OV_PROC_PERMISSION, get_ov_fhdskin, NULL, NULL, ""}
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
	printk(KERN_INFO "compiledate=@DATE@\n");
	printk(KERN_INFO "fpu=@TARGET_FPU@\n");
	printk(KERN_INFO "displaytype=@DISPLAY_TYPE@\n");
	printk(KERN_INFO "transcoding=@HAVE_TRANSCODING@\n");
	printk(KERN_INFO "multitranscoding=@HAVE_MULTITRANSCODING@\n");
	printk(KERN_INFO "hdmi=@HAVE_HDMI@\n");
	printk(KERN_INFO "yuv=@HAVE_YUV@\n");
	printk(KERN_INFO "rca=@HAVE_RCA@\n");
	printk(KERN_INFO "avjack=@HAVE_AV_JACK@\n");
	printk(KERN_INFO "scart=@HAVE_SCART@\n");
	printk(KERN_INFO "dvi=@HAVE_DVI@\n");
	printk(KERN_INFO "svideo=@HAVE_SVIDEO@\n");
	printk(KERN_INFO "hdmihdin=@HAVE_HDMI_IN_HD@\n");
	printk(KERN_INFO "hdmifhdin=@HAVE_HDMI_IN_FHD@\n");
	printk(KERN_INFO "wol=@HAVE_WOL@\n");
	printk(KERN_INFO "ci=@HAVE_CI@\n");
	printk(KERN_INFO "vfdsymbol=@HAVE_VFDSYMBOL@\n");
	printk(KERN_INFO "fhdskin=@HAVE_FHDSKIN@\n");
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
					OV_PROC_PERMISSION,
					(strcmp("bus", path) == 0) ? NULL : find_proc_dir(path)
				);
#else
				ovProc[i].entry = proc_create(
					(strcmp("bus", path) == 0) ? ovProc[i].name : name,
					OV_PROC_PERMISSION,
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
MODULE_DESCRIPTION("Open Vision information module\nmodel=@MACHINE@\nbrand=@BOX_BRAND@\nplatform=@STB_PLATFORM@\nvisionversion=@VISIONVERSION@\nvisionrevision=@VISIONREVISION@\nvisionlanguage=@VISIONLANGUAGE@\ndevelopername=@DEVELOPER_NAME@\nfeedsurl=@DISTRO_FEED_URI@\ndistro=@DISTRO_NAME@\noe=@BUILD_VERSION@\nkernel=@KERNELVERSION@\npython=@PREFERRED_VERSION_python@\nmediaservice=@PREFERRED_PROVIDER_virtual/enigma2-mediaservice@\nmultilib=@HAVE_MULTILIB@\narchitecture=@DEFAULTTUNE@\nsocfamily=@SOC_FAMILY@\nblindscanbinary=@BLINDSCAN_BINARY@\nrctype=@RCTYPE@\nrcname=@RCNAME@\nrcidnum=@RCIDNUM@\nsmallflash=@HAVE_SMALLFLASH@\nmiddleflash=@HAVE_MIDDLEFLASH@\nimagedir=@IMAGEDIR@\nimagefs=@IMAGE_FSTYPES@\nmtdbootfs=@MTD_BOOTFS@\nmtdrootfs=@MTD_ROOTFS@\nmtdkernel=@MTD_KERNEL@\nrootfile=@ROOTFS_FILE@\nkernelfile=@KERNEL_FILE@\nmkubifs=@MKUBIFS_ARGS@\nubinize=@UBINIZE_ARGS@\nforcemode=@FORCE@\ncompiledate=@DATE@\nfpu=@TARGET_FPU@\ndisplaytype=@DISPLAY_TYPE@\ntranscoding=@HAVE_TRANSCODING@\nmultitranscoding=@HAVE_MULTITRANSCODING@\nhdmi=@HAVE_HDMI@\nyuv=@HAVE_YUV@\nrca=@HAVE_RCA@\navjack=@HAVE_AV_JACK@\nscart=@HAVE_SCART@\ndvi=@HAVE_DVI@\nsvideo=@HAVE_SVIDEO@\nhdmihdin=@HAVE_HDMI_IN_HD@\nhdmifhdin=@HAVE_HDMI_IN_FHD@\nwol=@HAVE_WOL@\nci=@HAVE_CI@\nvfdsymbol=@HAVE_VFDSYMBOL@\nfhdskin=@HAVE_FHDSKIN@");
MODULE_VERSION("@VISIONVERSION@-@VISIONREVISION@");

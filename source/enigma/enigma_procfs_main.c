#include "enigma_procfs.h"

#define PROC_PERMISSION 0444

struct ProcStructure_s eProc[] =
{
	{cProcDir, "enigma", NULL, NULL, NULL, NULL, ""},
	{cProcEntry, "enigma/model", PROC_PERMISSION, get_model, NULL, NULL, ""},
	//getBoxType
	{cProcEntry, "enigma/displaymodel", PROC_PERMISSION, get_displaymodel, NULL, NULL, ""},
	//getDisplayModel
	{cProcEntry, "enigma/brand", PROC_PERMISSION, get_brand, NULL, NULL, ""},
	//getBoxBrand
	{cProcEntry, "enigma/displaybrand", PROC_PERMISSION, get_displaybrand, NULL, NULL, ""},
	//getDisplayBrand
	{cProcEntry, "enigma/platform", PROC_PERMISSION, get_platform, NULL, NULL, ""},
	//getMachineBuild
	{cProcEntry, "enigma/imgversion", PROC_PERMISSION, get_imgversion, NULL, NULL, ""},
	//getIMGVersion
	{cProcEntry, "enigma/imgrevision", PROC_PERMISSION, get_imgrevision, NULL, NULL, ""},
	//getIMGRevision
	{cProcEntry, "enigma/imglanguage", PROC_PERMISSION, get_imglanguage, NULL, NULL, ""},
	//getIMGLanguage
	{cProcEntry, "enigma/developername", PROC_PERMISSION, get_developername, NULL, NULL, ""},
	//getDeveloperName
	{cProcEntry, "enigma/feedsurl", PROC_PERMISSION, get_feedsurl, NULL, NULL, ""},
	//getFeedsUrl
	{cProcEntry, "enigma/distro", PROC_PERMISSION, get_distro, NULL, NULL, ""},
	//getImageDistro
	{cProcEntry, "enigma/oe", PROC_PERMISSION, get_oe, NULL, NULL, ""},
	//getOEVersion
	{cProcEntry, "enigma/kernel", PROC_PERMISSION, get_kernel, NULL, NULL, ""},
	//getKernelVersion
	{cProcEntry, "enigma/python", PROC_PERMISSION, get_python, NULL, NULL, ""},
	//new
	{cProcEntry, "enigma/mediaservice", PROC_PERMISSION, get_mediaservice, NULL, NULL, ""},
	//getE2Service
	{cProcEntry, "enigma/multilib", PROC_PERMISSION, get_multilib, NULL, NULL, ""},
	//getHaveMultiLib
	{cProcEntry, "enigma/architecture", PROC_PERMISSION, get_architecture, NULL, NULL, ""},
	//getImageArch
	{cProcEntry, "enigma/socfamily", PROC_PERMISSION, get_socfamily, NULL, NULL, ""},
	//getSoCFamily
	{cProcEntry, "enigma/blindscanbinary", PROC_PERMISSION, get_blindscanbinary, NULL, NULL, ""},
	//getBlindscanBin
	{cProcEntry, "enigma/rctype", PROC_PERMISSION, get_rctype, NULL, NULL, ""},
	//getRCType
	{cProcEntry, "enigma/rcname", PROC_PERMISSION, get_rcname, NULL, NULL, ""},
	//getRCName
	{cProcEntry, "enigma/rcidnum", PROC_PERMISSION, get_rcidnum, NULL, NULL, ""},
	//getRCIDNum
	{cProcEntry, "enigma/smallflash", PROC_PERMISSION, get_smallflash, NULL, NULL, ""},
	//getHaveSmallFlash
	{cProcEntry, "enigma/middleflash", PROC_PERMISSION, get_middleflash, NULL, NULL, ""},
	//getHaveMiddleFlash
	{cProcEntry, "enigma/imagedir", PROC_PERMISSION, get_imagedir, NULL, NULL, ""},
	//getImageFolder
	{cProcEntry, "enigma/imagefs", PROC_PERMISSION, get_imagefs, NULL, NULL, ""},
	//getImageFileSystem
	{cProcEntry, "enigma/mtdbootfs", PROC_PERMISSION, get_mtdbootfs, NULL, NULL, ""},
	//getMachineMtdBoot
	{cProcEntry, "enigma/mtdrootfs", PROC_PERMISSION, get_mtdrootfs, NULL, NULL, ""},
	//getMachineMtdRoot
	{cProcEntry, "enigma/mtdkernel", PROC_PERMISSION, get_mtdkernel, NULL, NULL, ""},
	//getMachineMtdKernel
	{cProcEntry, "enigma/rootfile", PROC_PERMISSION, get_rootfile, NULL, NULL, ""},
	//getMachineRootFile
	{cProcEntry, "enigma/kernelfile", PROC_PERMISSION, get_kernelfile, NULL, NULL, ""},
	//getMachineKernelFile
	{cProcEntry, "enigma/mkubifs", PROC_PERMISSION, get_mkubifs, NULL, NULL, ""},
	//getMachineMKUBIFS
	{cProcEntry, "enigma/ubinize", PROC_PERMISSION, get_ubinize, NULL, NULL, ""},
	//getMachineUBINIZE
	{cProcEntry, "enigma/forcemode", PROC_PERMISSION, get_forcemode, NULL, NULL, ""},
	//getForceMode
	{cProcEntry, "enigma/compiledate", PROC_PERMISSION, get_compiledate, NULL, NULL, ""},
	//new
	{cProcEntry, "enigma/fpu", PROC_PERMISSION, get_fpu, NULL, NULL, ""},
	//getImageFPU
	{cProcEntry, "enigma/displaytype", PROC_PERMISSION, get_displaytype, NULL, NULL, ""},
	//getDisplayType
	{cProcEntry, "enigma/transcoding", PROC_PERMISSION, get_transcoding, NULL, NULL, ""},
	//getHaveTranscoding
	{cProcEntry, "enigma/multitranscoding", PROC_PERMISSION, get_multitranscoding, NULL, NULL, ""},
	//getHaveMultiTranscoding
	{cProcEntry, "enigma/hdmi", PROC_PERMISSION, get_hdmi, NULL, NULL, ""},
	//getHaveHDMI
	{cProcEntry, "enigma/yuv", PROC_PERMISSION, get_yuv, NULL, NULL, ""},
	//getHaveYUV
	{cProcEntry, "enigma/rca", PROC_PERMISSION, get_rca, NULL, NULL, ""},
	//getHaveRCA
	{cProcEntry, "enigma/avjack", PROC_PERMISSION, get_avjack, NULL, NULL, ""},
	//getHaveAVJACK
	{cProcEntry, "enigma/scart", PROC_PERMISSION, get_scart, NULL, NULL, ""},
	//getHaveSCART
	{cProcEntry, "enigma/dvi", PROC_PERMISSION, get_dvi, NULL, NULL, ""},
	//getHaveDVI
	{cProcEntry, "enigma/svideo", PROC_PERMISSION, get_svideo, NULL, NULL, ""},
	//getHaveSVIDEO
	{cProcEntry, "enigma/hdmihdin", PROC_PERMISSION, get_hdmihdin, NULL, NULL, ""},
	//getHaveHDMIinHD
	{cProcEntry, "enigma/hdmifhdin", PROC_PERMISSION, get_hdmifhdin, NULL, NULL, ""},
	//getHaveHDMIinFHD
	{cProcEntry, "enigma/wol", PROC_PERMISSION, get_wol, NULL, NULL, ""},
	//getHaveWOL
	{cProcEntry, "enigma/ci", PROC_PERMISSION, get_ci, NULL, NULL, ""},
	//getHaveCI
	{cProcEntry, "enigma/vfdsymbol", PROC_PERMISSION, get_vfdsymbol, NULL, NULL, ""},
	//getHaveVFDSymbol
	{cProcEntry, "enigma/fhdskin", PROC_PERMISSION, get_fhdskin, NULL, NULL, ""},
	//getFHDSkin
	{cProcEntry, "enigma/dboxlcd", PROC_PERMISSION, get_dboxlcd, NULL, NULL, ""},
	//getDBoxLCD
	{cProcEntry, "enigma/imageversion", PROC_PERMISSION, get_imageversion, NULL, NULL, ""},
	//getImageVersion
	{cProcEntry, "enigma/imagebuild", PROC_PERMISSION, get_imagebuild, NULL, NULL, ""},
	//getImageBuild
	{cProcEntry, "enigma/imagedevbuild", PROC_PERMISSION, get_imagedevbuild, NULL, NULL, ""},
	//getImageDevBuild
	{cProcEntry, "enigma/imagetype", PROC_PERMISSION, get_imagetype, NULL, NULL, ""}
	//getImageType
};

struct proc_dir_entry * find_proc_dir(char * name)
{
	int i;

	for (i = 0; i < sizeof(eProc) / sizeof(eProc[0]); i++)
	{
		if ((eProc[i].type == cProcDir) && (strcmp(name, eProc[i].name) == 0))
			return eProc[i].entry;
	}
	return NULL;
}

static int eprocfs_show(struct seq_file *m, void* data)
{
	int bytes = 0;
	char bufferfile[MAX_CHAR_LENGTH];
	struct ProcWriteInfo *proc_info = m->private;
	seq_printf(m, "\n");

	bytes = sprintf(bufferfile, "eprocfs_show : proc_info->proc_i = %d\n", proc_info->proc_i);

	return 0;
}

static int eprocfs_open(struct inode *inode, struct file *file)
{
	struct ProcWriteInfo *proc_info;
	int i;
	char *path, *ptr = NULL, *eProc_fpath = NULL;

	proc_info = kmalloc(sizeof(struct ProcWriteInfo), GFP_KERNEL);
	if (proc_info == NULL)
		return -ENOMEM;

	path = kmalloc(PAGE_SIZE, GFP_KERNEL);
	eProc_fpath = kmalloc(PAGE_SIZE, GFP_KERNEL);
#if LINUX_VERSION_CODE < KERNEL_VERSION(2,6,26)
	ptr = d_path(file->f_dentry, file->f_vfsmnt, path, PAGE_SIZE);
#else
	ptr = d_path(&file->f_path, path, PAGE_SIZE);
#endif
	proc_info->proc_i = -EPERM;

	for (i = 0; i < sizeof(eProc) / sizeof(eProc[0]); i++)
	{
		int bytes = 0;
		char buffer[MAX_CHAR_LENGTH];

		sprintf(eProc_fpath, "/proc/%s", eProc[i].name);

		bytes = sprintf(buffer, "eProc : file->f_mode = %d / %s / %s == %s\n", file->f_mode, eProc[i].name, ptr, eProc_fpath);

//		if (eProc[i].type == cProcEntry && strstr(ptr, eProc[i].name))
		if (eProc[i].type == cProcEntry && !strcmp(ptr, eProc_fpath))
		{
			proc_info->proc_i = i;
			proc_info->count = -EPERM;

			if (file->f_mode & FMODE_READ)
			{
				if (eProc[i].read_proc != NULL)
				{
					if (eProc[i].proc_info != NULL)
					{
						proc_info = eProc[i].proc_info;
					}
					return single_open(file, eProc[i].read_proc, proc_info);
				}
				return single_open(file, eprocfs_show, proc_info);
			}
			else if (file->f_mode & FMODE_WRITE)
			{
				if (eProc[i].write_proc == NULL)
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

static ssize_t eprocfs_write(struct file *file, const char __user *ubuf,
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
			eProc[proc_i].write_proc(proc_info, kbuf);
			eProc[proc_i].proc_info = proc_info;
		}
	}
	return count;
}

static unsigned int eprocfs_poll(struct file *file,
				   struct poll_table_struct *wait)
{
	unsigned int mask = 0;
#ifdef DEBUG
	printk(KERN_DEBUG "eprocfs: poll called (unimplemented)\n");
#endif
	return mask;
}

static int eprocfs_release(struct inode *inode, struct file *file)
{
//	struct ProcWriteInfo *proc_info = file->private_data;
#ifdef DEBUG
	printk(KERN_DEBUG "eprocfs: release called\n");
#endif
//	kfree(proc_info);
	return 0;
}

#if LINUX_VERSION_CODE >= KERNEL_VERSION(5,6,0)
static const struct proc_ops eprocfs_fops = {
	.proc_open	= eprocfs_open,
	.proc_read	= seq_read,
	.proc_write	= eprocfs_write,
	.proc_lseek	= no_llseek,
	.proc_poll	= eprocfs_poll,
	.proc_mmap	= NULL,
	.proc_release	= eprocfs_release,
};
#else
static const struct file_operations eprocfs_fops = {
	.owner		= THIS_MODULE,
	.open		= eprocfs_open,
	.read		= seq_read,
	.write		= eprocfs_write,
	.llseek	= no_llseek,
	.poll		= eprocfs_poll,
	.mmap		= NULL,
	.release	= eprocfs_release,
};
#endif
void e_kernel_info(void)
{
	printk(KERN_INFO "model=@MACHINE@\n");
	printk(KERN_INFO "displaymodel=@DISPLAY_MODEL@\n");
	printk(KERN_INFO "brand=@BOX_BRAND@\n");
	printk(KERN_INFO "displaybrand=@DISPLAY_BRAND@\n");
	printk(KERN_INFO "platform=@STB_PLATFORM@\n");
	printk(KERN_INFO "imgversion=@IMAGE_VERSION@\n");
	printk(KERN_INFO "imgrevision=@BUILD_VERSION@\n");
	printk(KERN_INFO "imglanguage=@VISIONLANGUAGE@\n");
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
	printk(KERN_INFO "dboxlcd=@SUPPORT_DBOXLCD@\n");
	printk(KERN_INFO "imageversion=@DISTRO_VERSION@\n");
	printk(KERN_INFO "imagebuild=@BUILD_VERSION@\n");
	printk(KERN_INFO "imagedevbuild=@DEVELOPER_BUILD_VERSION@\n");
	printk(KERN_INFO "imagetype=@DISTRO_TYPE@\n");
}

static int __init eprocfs_init_module(void)
{
	int i;
	char *path;
	char *name;

	e_kernel_info();

	for (i = 0; i < sizeof(eProc) / sizeof(eProc[0]); i++)
	{
		path = dirname(eProc[i].name);
		name = basename(eProc[i].name);

		switch (eProc[i].type)
		{
			case cProcDir:
				eProc[i].entry = proc_mkdir(name, find_proc_dir(path));

				if (eProc[i].entry == NULL)
				{
					printk("%s(): could not create entry %s\n", __func__, eProc[i].name);
				}
				break;

			case cProcEntry:
#if LINUX_VERSION_CODE < KERNEL_VERSION(3,10,0)
				eProc[i].entry = create_proc_entry(
					(strcmp("bus", path) == 0) ? eProc[i].name : name,
					PROC_PERMISSION,
					(strcmp("bus", path) == 0) ? NULL : find_proc_dir(path)
				);
#else
				eProc[i].entry = proc_create(
					(strcmp("bus", path) == 0) ? eProc[i].name : name,
					PROC_PERMISSION,
					(strcmp("bus", path) == 0) ? NULL : find_proc_dir(path),
					&eprocfs_fops
				);
#endif
				break;

			default:
				printk("%s(): invalid type %d\n", __func__, eProc[i].type);
		}
	}
	return 0;
}

module_init(eprocfs_init_module);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Open Vision developers/oe-alliance");
MODULE_DESCRIPTION("Enigma2 information module\nmodel=@MACHINE@\ndisplaymodel=@DISPLAY_MODEL@\nbrand=@BOX_BRAND@\ndisplaybrand=@DISPLAY_BRAND@\nplatform=@STB_PLATFORM@\nimgversion=@IMAGE_VERSION@\nimgrevision=@BUILD_VERSION@\nimglanguage=@VISIONLANGUAGE@\ndevelopername=@DEVELOPER_NAME@\nfeedsurl=@DISTRO_FEED_URI@\ndistro=@DISTRO_NAME@\noe=@BUILD_VERSION@\nkernel=@KERNELVERSION@\npython=@PREFERRED_VERSION_python@\nmediaservice=@PREFERRED_PROVIDER_virtual/enigma2-mediaservice@\nmultilib=@HAVE_MULTILIB@\narchitecture=@DEFAULTTUNE@\nsocfamily=@SOC_FAMILY@\nblindscanbinary=@BLINDSCAN_BINARY@\nrctype=@RCTYPE@\nrcname=@RCNAME@\nrcidnum=@RCIDNUM@\nsmallflash=@HAVE_SMALLFLASH@\nmiddleflash=@HAVE_MIDDLEFLASH@\nimagedir=@IMAGEDIR@\nimagefs=@IMAGE_FSTYPES@\nmtdbootfs=@MTD_BOOTFS@\nmtdrootfs=@MTD_ROOTFS@\nmtdkernel=@MTD_KERNEL@\nrootfile=@ROOTFS_FILE@\nkernelfile=@KERNEL_FILE@\nmkubifs=@MKUBIFS_ARGS@\nubinize=@UBINIZE_ARGS@\nforcemode=@FORCE@\ncompiledate=@DATE@\nfpu=@TARGET_FPU@\ndisplaytype=@DISPLAY_TYPE@\ntranscoding=@HAVE_TRANSCODING@\nmultitranscoding=@HAVE_MULTITRANSCODING@\nhdmi=@HAVE_HDMI@\nyuv=@HAVE_YUV@\nrca=@HAVE_RCA@\navjack=@HAVE_AV_JACK@\nscart=@HAVE_SCART@\ndvi=@HAVE_DVI@\nsvideo=@HAVE_SVIDEO@\nhdmihdin=@HAVE_HDMI_IN_HD@\nhdmifhdin=@HAVE_HDMI_IN_FHD@\nwol=@HAVE_WOL@\nci=@HAVE_CI@\nvfdsymbol=@HAVE_VFDSYMBOL@\nfhdskin=@HAVE_FHDSKIN@\ndboxlcd=@SUPPORT_DBOXLCD@\nimageversion=@DISTRO_VERSION@\nimagebuild=@BUILD_VERSION@\nimagedevbuild=@DEVELOPER_BUILD_VERSION@\nimagetype=@DISTRO_TYPE@");
MODULE_VERSION("@IMAGE_VERSION@-@BUILD_VERSION@");

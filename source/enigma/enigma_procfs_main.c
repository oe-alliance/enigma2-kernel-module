#include "enigma_procfs.h"

#define ENIGMA_PROC_PERMISSION 0444

struct ProcStructure_s enigmaProc[] =
{
	{cProcDir, "enigma", NULL, NULL, NULL, NULL, ""},
	{cProcEntry, "enigma/model", ENIGMA_PROC_PERMISSION, get_enigma_model, NULL, NULL, ""},
	//getBoxType
	{cProcEntry, "enigma/displaymodel", ENIGMA_PROC_PERMISSION, get_enigma_displaymodel, NULL, NULL, ""},
	//getDisplayModel
	{cProcEntry, "enigma/brand", ENIGMA_PROC_PERMISSION, get_enigma_brand, NULL, NULL, ""},
	//getBoxBrand
	{cProcEntry, "enigma/displaybrand", ENIGMA_PROC_PERMISSION, get_enigma_displaybrand, NULL, NULL, ""},
	//getDisplayBrand
	{cProcEntry, "enigma/platform", ENIGMA_PROC_PERMISSION, get_enigma_platform, NULL, NULL, ""},
	//getMachineBuild
	{cProcEntry, "enigma/imgversion", ENIGMA_PROC_PERMISSION, get_enigma_imgversion, NULL, NULL, ""},
	//getIMGVersion
	{cProcEntry, "enigma/imgrevision", ENIGMA_PROC_PERMISSION, get_enigma_imgrevision, NULL, NULL, ""},
	//getIMGRevision
	{cProcEntry, "enigma/imglanguage", ENIGMA_PROC_PERMISSION, get_enigma_imglanguage, NULL, NULL, ""},
	//getIMGLanguage
	{cProcEntry, "enigma/developername", ENIGMA_PROC_PERMISSION, get_enigma_developername, NULL, NULL, ""},
	//getDeveloperName
	{cProcEntry, "enigma/feedsurl", ENIGMA_PROC_PERMISSION, get_enigma_feedsurl, NULL, NULL, ""},
	//getFeedsUrl
	{cProcEntry, "enigma/distro", ENIGMA_PROC_PERMISSION, get_enigma_distro, NULL, NULL, ""},
	//getImageDistro
	{cProcEntry, "enigma/displaydistro", ENIGMA_PROC_PERMISSION, get_enigma_displaydistro, NULL, NULL, ""},
	//getDisplayDistro
	{cProcEntry, "enigma/oe", ENIGMA_PROC_PERMISSION, get_enigma_oe, NULL, NULL, ""},
	//getOEVersion
	{cProcEntry, "enigma/kernel", ENIGMA_PROC_PERMISSION, get_enigma_kernel, NULL, NULL, ""},
	//getKernelVersion
	{cProcEntry, "enigma/python", ENIGMA_PROC_PERMISSION, get_enigma_python, NULL, NULL, ""},
	//new
	{cProcEntry, "enigma/mediaservice", ENIGMA_PROC_PERMISSION, get_enigma_mediaservice, NULL, NULL, ""},
	//getE2Service
	{cProcEntry, "enigma/multilib", ENIGMA_PROC_PERMISSION, get_enigma_multilib, NULL, NULL, ""},
	//getHaveMultiLib
	{cProcEntry, "enigma/architecture", ENIGMA_PROC_PERMISSION, get_enigma_architecture, NULL, NULL, ""},
	//getImageArch
	{cProcEntry, "enigma/socfamily", ENIGMA_PROC_PERMISSION, get_enigma_socfamily, NULL, NULL, ""},
	//getSoCFamily
	{cProcEntry, "enigma/blindscanbinary", ENIGMA_PROC_PERMISSION, get_enigma_blindscanbinary, NULL, NULL, ""},
	//getBlindscanBin
	{cProcEntry, "enigma/rctype", ENIGMA_PROC_PERMISSION, get_enigma_rctype, NULL, NULL, ""},
	//getRCType
	{cProcEntry, "enigma/rcname", ENIGMA_PROC_PERMISSION, get_enigma_rcname, NULL, NULL, ""},
	//getRCName
	{cProcEntry, "enigma/rcidnum", ENIGMA_PROC_PERMISSION, get_enigma_rcidnum, NULL, NULL, ""},
	//getRCIDNum
	{cProcEntry, "enigma/smallflash", ENIGMA_PROC_PERMISSION, get_enigma_smallflash, NULL, NULL, ""},
	//getHaveSmallFlash
	{cProcEntry, "enigma/middleflash", ENIGMA_PROC_PERMISSION, get_enigma_middleflash, NULL, NULL, ""},
	//getHaveMiddleFlash
	{cProcEntry, "enigma/imagedir", ENIGMA_PROC_PERMISSION, get_enigma_imagedir, NULL, NULL, ""},
	//getImageFolder
	{cProcEntry, "enigma/imagefs", ENIGMA_PROC_PERMISSION, get_enigma_imagefs, NULL, NULL, ""},
	//getImageFileSystem
	{cProcEntry, "enigma/mtdbootfs", ENIGMA_PROC_PERMISSION, get_enigma_mtdbootfs, NULL, NULL, ""},
	//getMachineMtdBoot
	{cProcEntry, "enigma/mtdrootfs", ENIGMA_PROC_PERMISSION, get_enigma_mtdrootfs, NULL, NULL, ""},
	//getMachineMtdRoot
	{cProcEntry, "enigma/mtdkernel", ENIGMA_PROC_PERMISSION, get_enigma_mtdkernel, NULL, NULL, ""},
	//getMachineMtdKernel
	{cProcEntry, "enigma/rootfile", ENIGMA_PROC_PERMISSION, get_enigma_rootfile, NULL, NULL, ""},
	//getMachineRootFile
	{cProcEntry, "enigma/kernelfile", ENIGMA_PROC_PERMISSION, get_enigma_kernelfile, NULL, NULL, ""},
	//getMachineKernelFile
	{cProcEntry, "enigma/mkubifs", ENIGMA_PROC_PERMISSION, get_enigma_mkubifs, NULL, NULL, ""},
	//getMachineMKUBIFS
	{cProcEntry, "enigma/ubinize", ENIGMA_PROC_PERMISSION, get_enigma_ubinize, NULL, NULL, ""},
	//getMachineUBINIZE
	{cProcEntry, "enigma/forcemode", ENIGMA_PROC_PERMISSION, get_enigma_forcemode, NULL, NULL, ""},
	//getForceMode
	{cProcEntry, "enigma/compiledate", ENIGMA_PROC_PERMISSION, get_enigma_compiledate, NULL, NULL, ""},
	//new
	{cProcEntry, "enigma/fpu", ENIGMA_PROC_PERMISSION, get_enigma_fpu, NULL, NULL, ""},
	//getImageFPU
	{cProcEntry, "enigma/displaytype", ENIGMA_PROC_PERMISSION, get_enigma_displaytype, NULL, NULL, ""},
	//getDisplayType
	{cProcEntry, "enigma/transcoding", ENIGMA_PROC_PERMISSION, get_enigma_transcoding, NULL, NULL, ""},
	//getHaveTranscoding
	{cProcEntry, "enigma/multitranscoding", ENIGMA_PROC_PERMISSION, get_enigma_multitranscoding, NULL, NULL, ""},
	//getHaveMultiTranscoding
	{cProcEntry, "enigma/hdmi", ENIGMA_PROC_PERMISSION, get_enigma_hdmi, NULL, NULL, ""},
	//getHaveHDMI
	{cProcEntry, "enigma/yuv", ENIGMA_PROC_PERMISSION, get_enigma_yuv, NULL, NULL, ""},
	//getHaveYUV
	{cProcEntry, "enigma/rca", ENIGMA_PROC_PERMISSION, get_enigma_rca, NULL, NULL, ""},
	//getHaveRCA
	{cProcEntry, "enigma/avjack", ENIGMA_PROC_PERMISSION, get_enigma_avjack, NULL, NULL, ""},
	//getHaveAVJACK
	{cProcEntry, "enigma/scart", ENIGMA_PROC_PERMISSION, get_enigma_scart, NULL, NULL, ""},
	//getHaveSCART
	{cProcEntry, "enigma/dvi", ENIGMA_PROC_PERMISSION, get_enigma_dvi, NULL, NULL, ""},
	//getHaveDVI
	{cProcEntry, "enigma/svideo", ENIGMA_PROC_PERMISSION, get_enigma_svideo, NULL, NULL, ""},
	//getHaveSVIDEO
	{cProcEntry, "enigma/hdmihdin", ENIGMA_PROC_PERMISSION, get_enigma_hdmihdin, NULL, NULL, ""},
	//getHaveHDMIinHD
	{cProcEntry, "enigma/hdmifhdin", ENIGMA_PROC_PERMISSION, get_enigma_hdmifhdin, NULL, NULL, ""},
	//getHaveHDMIinFHD
	{cProcEntry, "enigma/wol", ENIGMA_PROC_PERMISSION, get_enigma_wol, NULL, NULL, ""},
	//getHaveWOL
	{cProcEntry, "enigma/wwol", ENIGMA_PROC_PERMISSION, get_enigma_wwol, NULL, NULL, ""},
	//getHaveWWOL
	{cProcEntry, "enigma/ci", ENIGMA_PROC_PERMISSION, get_enigma_ci, NULL, NULL, ""},
	//getHaveCI
	{cProcEntry, "enigma/vfdsymbol", ENIGMA_PROC_PERMISSION, get_enigma_vfdsymbol, NULL, NULL, ""},
	//getHaveVFDSymbol
	{cProcEntry, "enigma/fhdskin", ENIGMA_PROC_PERMISSION, get_enigma_fhdskin, NULL, NULL, ""},
	//getFHDSkin
	{cProcEntry, "enigma/dboxlcd", ENIGMA_PROC_PERMISSION, get_enigma_dboxlcd, NULL, NULL, ""},
	//getDBoxLCD
	{cProcEntry, "enigma/imageversion", ENIGMA_PROC_PERMISSION, get_enigma_imageversion, NULL, NULL, ""},
	//getImageVersion
	{cProcEntry, "enigma/imagebuild", ENIGMA_PROC_PERMISSION, get_enigma_imagebuild, NULL, NULL, ""},
	//getImageBuild
	{cProcEntry, "enigma/imagedevbuild", ENIGMA_PROC_PERMISSION, get_enigma_imagedevbuild, NULL, NULL, ""},
	//getImageDevBuild
	{cProcEntry, "enigma/imagetype", ENIGMA_PROC_PERMISSION, get_enigma_imagetype, NULL, NULL, ""},
	//getImageType
	{cProcEntry, "enigma/informations", ENIGMA_PROC_PERMISSION, get_enigma_allinfo, NULL, NULL, ""}
};

struct proc_dir_entry * find_proc_dir(char * name)
{
	int i;

	for (i = 0; i < sizeof(enigmaProc) / sizeof(enigmaProc[0]); i++)
	{
		if ((enigmaProc[i].type == cProcDir) && (strcmp(name, enigmaProc[i].name) == 0))
			return enigmaProc[i].entry;
	}
	return NULL;
}

static int enigmaProcfs_show(struct seq_file *m, void* data)
{
	int bytes = 0;
	char bufferfile[MAX_CHAR_LENGTH];
	struct ProcWriteInfo *proc_info = m->private;
	seq_printf(m, "\n");

	bytes = sprintf(bufferfile, "enigmaProcfs_show : proc_info->proc_i = %d\n", proc_info->proc_i);

	return 0;
}

static int enigmaProcfs_open(struct inode *inode, struct file *file)
{
	struct ProcWriteInfo *proc_info;
	int i;
	char *path, *ptr = NULL, *enigmaProc_fpath = NULL;

	proc_info = kmalloc(sizeof(struct ProcWriteInfo), GFP_KERNEL);
	if (proc_info == NULL)
		return -ENOMEM;

	path = kmalloc(PAGE_SIZE, GFP_KERNEL);
	enigmaProc_fpath = kmalloc(PAGE_SIZE, GFP_KERNEL);
#if LINUX_VERSION_CODE < KERNEL_VERSION(2,6,26)
	ptr = d_path(file->f_dentry, file->f_vfsmnt, path, PAGE_SIZE);
#else
	ptr = d_path(&file->f_path, path, PAGE_SIZE);
#endif
	proc_info->proc_i = -EPERM;

	for (i = 0; i < sizeof(enigmaProc) / sizeof(enigmaProc[0]); i++)
	{
		int bytes = 0;
		char buffer[MAX_CHAR_LENGTH];

		sprintf(enigmaProc_fpath, "/proc/%s", enigmaProc[i].name);

		bytes = sprintf(buffer, "enigmaProc : file->f_mode = %d / %s / %s == %s\n", file->f_mode, enigmaProc[i].name, ptr, enigmaProc_fpath);

//		if (enigmaProc[i].type == cProcEntry && strstr(ptr, enigmaProc[i].name))
		if (enigmaProc[i].type == cProcEntry && !strcmp(ptr, enigmaProc_fpath))
		{
			proc_info->proc_i = i;
			proc_info->count = -EPERM;

			if (file->f_mode & FMODE_READ)
			{
				if (enigmaProc[i].read_proc != NULL)
				{
					if (enigmaProc[i].proc_info != NULL)
					{
						proc_info = enigmaProc[i].proc_info;
					}
					return single_open(file, enigmaProc[i].read_proc, proc_info);
				}
				return single_open(file, enigmaProcfs_show, proc_info);
			}
			else if (file->f_mode & FMODE_WRITE)
			{
				if (enigmaProc[i].write_proc == NULL)
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

static ssize_t enigmaProcfs_write(struct file *file, const char __user *ubuf,
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
			enigmaProc[proc_i].write_proc(proc_info, kbuf);
			enigmaProc[proc_i].proc_info = proc_info;
		}
	}
	return count;
}

static unsigned int enigmaProcfs_poll(struct file *file,
				   struct poll_table_struct *wait)
{
	unsigned int mask = 0;
#ifdef DEBUG
	printk(KERN_DEBUG "enigmaProcfs: poll called (unimplemented)\n");
#endif
	return mask;
}

static int enigmaProcfs_release(struct inode *inode, struct file *file)
{
//	struct ProcWriteInfo *proc_info = file->private_data;
#ifdef DEBUG
	printk(KERN_DEBUG "enigmaProcfs: release called\n");
#endif
//	kfree(proc_info);
	return 0;
}

#if LINUX_VERSION_CODE >= KERNEL_VERSION(5,6,0)
static const struct proc_ops enigmaProcfs_fops = {
	.proc_open	= enigmaProcfs_open,
	.proc_read	= seq_read,
	.proc_write	= enigmaProcfs_write,
	.proc_lseek	= no_llseek,
	.proc_poll	= enigmaProcfs_poll,
	.proc_mmap	= NULL,
	.proc_release	= enigmaProcfs_release,
};
#else
static const struct file_operations enigmaProcfs_fops = {
	.owner		= THIS_MODULE,
	.open		= enigmaProcfs_open,
	.read		= seq_read,
	.write		= enigmaProcfs_write,
	.llseek	= no_llseek,
	.poll		= enigmaProcfs_poll,
	.mmap		= NULL,
	.release	= enigmaProcfs_release,
};
#endif
void enigma_kernel_info(void)
{
	printk(KERN_INFO "model=@MACHINE@\n");
	printk(KERN_INFO "displaymodel=@DISPLAY_MODEL@\n");
	printk(KERN_INFO "brand=@BOX_BRAND@\n");
	printk(KERN_INFO "displaybrand=@DISPLAY_BRAND@\n");
	printk(KERN_INFO "platform=@STB_PLATFORM@\n");
	printk(KERN_INFO "imgversion=@IMAGE_VERSION@\n");
	printk(KERN_INFO "imgrevision=@BUILD_VERSION@\n");
	printk(KERN_INFO "imglanguage=@LANGUAGE@\n");
	printk(KERN_INFO "developername=@DEVELOPER_NAME@\n");
	printk(KERN_INFO "feedsurl=@DISTRO_FEED_URI@\n");
	printk(KERN_INFO "distro=@DISTRO_NAME@\n");
	printk(KERN_INFO "displaydistro=@DISPLAY_DISTRO@\n");
	printk(KERN_INFO "oe=@OE_VERSION@\n");
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
	printk(KERN_INFO "wwol=@HAVE_WWOL@\n");
	printk(KERN_INFO "ci=@HAVE_CI@\n");
	printk(KERN_INFO "vfdsymbol=@HAVE_VFDSYMBOL@\n");
	printk(KERN_INFO "fhdskin=@HAVE_FHDSKIN@\n");
	printk(KERN_INFO "dboxlcd=@SUPPORT_DBOXLCD@\n");
	printk(KERN_INFO "imageversion=@DISTRO_VERSION@\n");
	printk(KERN_INFO "imagebuild=@BUILD_VERSION@\n");
	printk(KERN_INFO "imagedevbuild=@DEVELOPER_BUILD_VERSION@\n");
	printk(KERN_INFO "imagetype=@DISTRO_TYPE@\n");
}

static int __init enigmaProcfs_init_module(void)
{
	int i;
	char *path;
	char *name;

	enigma_kernel_info();

	for (i = 0; i < sizeof(enigmaProc) / sizeof(enigmaProc[0]); i++)
	{
		path = dirname(enigmaProc[i].name);
		name = basename(enigmaProc[i].name);

		switch (enigmaProc[i].type)
		{
			case cProcDir:
				enigmaProc[i].entry = proc_mkdir(name, find_proc_dir(path));

				if (enigmaProc[i].entry == NULL)
				{
					printk("%s(): could not create entry %s\n", __func__, enigmaProc[i].name);
				}
				break;

			case cProcEntry:
#if LINUX_VERSION_CODE < KERNEL_VERSION(3,10,0)
				enigmaProc[i].entry = create_proc_entry(
					(strcmp("bus", path) == 0) ? enigmaProc[i].name : name,
					ENIGMA_PROC_PERMISSION,
					(strcmp("bus", path) == 0) ? NULL : find_proc_dir(path)
				);
#else
				enigmaProc[i].entry = proc_create(
					(strcmp("bus", path) == 0) ? enigmaProc[i].name : name,
					ENIGMA_PROC_PERMISSION,
					(strcmp("bus", path) == 0) ? NULL : find_proc_dir(path),
					&enigmaProcfs_fops
				);
#endif
				break;

			default:
				printk("%s(): invalid type %d\n", __func__, enigmaProc[i].type);
		}
	}
	return 0;
}

module_init(enigmaProcfs_init_module);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Open Vision developers/oe-alliance");
MODULE_DESCRIPTION("Enigma2 information module\nmodel=@MACHINE@\ndisplaymodel=@DISPLAY_MODEL@\nbrand=@BOX_BRAND@\ndisplaybrand=@DISPLAY_BRAND@\nplatform=@STB_PLATFORM@\nimgversion=@IMAGE_VERSION@\nimgrevision=@BUILD_VERSION@\nimglanguage=@LANGUAGE@\ndevelopername=@DEVELOPER_NAME@\nfeedsurl=@DISTRO_FEED_URI@\ndistro=@DISTRO_NAME@\ndisplaydistro=@DISPLAY_DISTRO@\noe=@OE_VERSION@\nkernel=@KERNELVERSION@\npython=@PREFERRED_VERSION_python@\nmediaservice=@PREFERRED_PROVIDER_virtual/enigma2-mediaservice@\nmultilib=@HAVE_MULTILIB@\narchitecture=@DEFAULTTUNE@\nsocfamily=@SOC_FAMILY@\nblindscanbinary=@BLINDSCAN_BINARY@\nrctype=@RCTYPE@\nrcname=@RCNAME@\nrcidnum=@RCIDNUM@\nsmallflash=@HAVE_SMALLFLASH@\nmiddleflash=@HAVE_MIDDLEFLASH@\nimagedir=@IMAGEDIR@\nimagefs=@IMAGE_FSTYPES@\nmtdbootfs=@MTD_BOOTFS@\nmtdrootfs=@MTD_ROOTFS@\nmtdkernel=@MTD_KERNEL@\nrootfile=@ROOTFS_FILE@\nkernelfile=@KERNEL_FILE@\nmkubifs=@MKUBIFS_ARGS@\nubinize=@UBINIZE_ARGS@\nforcemode=@FORCE@\ncompiledate=@DATE@\nfpu=@TARGET_FPU@\ndisplaytype=@DISPLAY_TYPE@\ntranscoding=@HAVE_TRANSCODING@\nmultitranscoding=@HAVE_MULTITRANSCODING@\nhdmi=@HAVE_HDMI@\nyuv=@HAVE_YUV@\nrca=@HAVE_RCA@\navjack=@HAVE_AV_JACK@\nscart=@HAVE_SCART@\ndvi=@HAVE_DVI@\nsvideo=@HAVE_SVIDEO@\nhdmihdin=@HAVE_HDMI_IN_HD@\nhdmifhdin=@HAVE_HDMI_IN_FHD@\nwol=@HAVE_WOL@\nwwol=@HAVE_WWOL@\nci=@HAVE_CI@\nvfdsymbol=@HAVE_VFDSYMBOL@\nfhdskin=@HAVE_FHDSKIN@\ndboxlcd=@SUPPORT_DBOXLCD@\nimageversion=@DISTRO_VERSION@\nimagebuild=@BUILD_VERSION@\nimagedevbuild=@DEVELOPER_BUILD_VERSION@\nimagetype=@DISTRO_TYPE@");
MODULE_VERSION("@IMAGE_VERSION@-@BUILD_VERSION@");

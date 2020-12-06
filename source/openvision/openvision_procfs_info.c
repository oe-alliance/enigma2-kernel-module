#include "openvision_procfs.h"

int get_ov_model(struct seq_file *m, void* data)
{
	seq_printf(m, "@MACHINE@\n");
#ifdef DEBUG
	printk(KERN_INFO "model=@MACHINE@\n");
#endif
	return 0;
}

int get_ov_brand(struct seq_file *m, void* data)
{
	seq_printf(m, "@BOX_BRAND@\n");
#ifdef DEBUG
	printk(KERN_INFO "brand=@BOX_BRAND@\n");
#endif
	return 0;
}

int get_ov_platform(struct seq_file *m, void* data)
{
	seq_printf(m, "@STB_PLATFORM@\n");
#ifdef DEBUG
	printk(KERN_INFO "platform=@STB_PLATFORM@\n");
#endif
	return 0;
}

int get_ov_visionversion(struct seq_file *m, void* data)
{
	seq_printf(m, "@VISIONVERSION@\n");
#ifdef DEBUG
	printk(KERN_INFO "visionversion=@VISIONVERSION@\n");
#endif
	return 0;
}

int get_ov_visionrevision(struct seq_file *m, void* data)
{
	seq_printf(m, "@VISIONREVISION@\n");
#ifdef DEBUG
	printk(KERN_INFO "visionrevision=@VISIONREVISION@\n");
#endif
	return 0;
}

int get_ov_visionlanguage(struct seq_file *m, void* data)
{
	seq_printf(m, "@VISIONLANGUAGE@\n");
#ifdef DEBUG
	printk(KERN_INFO "visionlanguage=@VISIONLANGUAGE@\n");
#endif
	return 0;
}

int get_ov_developername(struct seq_file *m, void* data)
{
	seq_printf(m, "@DEVELOPER_NAME@\n");
#ifdef DEBUG
	printk(KERN_INFO "developername=@DEVELOPER_NAME@\n");
#endif
	return 0;
}

int get_ov_feedsurl(struct seq_file *m, void* data)
{
	seq_printf(m, "@DISTRO_FEED_URI@\n");
#ifdef DEBUG
	printk(KERN_INFO "feedsurl=@DISTRO_FEED_URI@\n");
#endif
	return 0;
}

int get_ov_distro(struct seq_file *m, void* data)
{
	seq_printf(m, "@DISTRO_NAME@\n");
#ifdef DEBUG
	printk(KERN_INFO "distro=@DISTRO_NAME@\n");
#endif
	return 0;
}

int get_ov_oe(struct seq_file *m, void* data)
{
	seq_printf(m, "@BUILD_VERSION@\n");
#ifdef DEBUG
	printk(KERN_INFO "oe=@BUILD_VERSION@\n");
#endif
	return 0;
}

int get_ov_kernel(struct seq_file *m, void* data)
{
	seq_printf(m, "@KERNELVERSION@\n");
#ifdef DEBUG
	printk(KERN_INFO "kernel=@KERNELVERSION@\n");
#endif
	return 0;
}

int get_ov_python(struct seq_file *m, void* data)
{
	seq_printf(m, "@PREFERRED_VERSION_python@\n");
#ifdef DEBUG
	printk(KERN_INFO "python=@PREFERRED_VERSION_python@\n");
#endif
	return 0;
}

int get_ov_mediaservice(struct seq_file *m, void* data)
{
	seq_printf(m, "@PREFERRED_PROVIDER_virtual/enigma2-mediaservice@\n");
#ifdef DEBUG
	printk(KERN_INFO "mediaservice=@PREFERRED_PROVIDER_virtual/enigma2-mediaservice@\n");
#endif
	return 0;
}

int get_ov_multilib(struct seq_file *m, void* data)
{
	seq_printf(m, "@HAVE_MULTILIB@\n");
#ifdef DEBUG
	printk(KERN_INFO "multilib=@HAVE_MULTILIB@\n");
#endif
	return 0;
}

int get_ov_architecture(struct seq_file *m, void* data)
{
	seq_printf(m, "@DEFAULTTUNE@\n");
#ifdef DEBUG
	printk(KERN_INFO "architecture=@DEFAULTTUNE@\n");
#endif
	return 0;
}

int get_ov_socfamily(struct seq_file *m, void* data)
{
	seq_printf(m, "@SOC_FAMILY@\n");
#ifdef DEBUG
	printk(KERN_INFO "socfamily=@SOC_FAMILY@\n");
#endif
	return 0;
}

int get_ov_blindscanbinary(struct seq_file *m, void* data)
{
	seq_printf(m, "@BLINDSCAN_BINARY@\n");
#ifdef DEBUG
	printk(KERN_INFO "blindscanbinary=@BLINDSCAN_BINARY@\n");
#endif
	return 0;
}

int get_ov_rctype(struct seq_file *m, void* data)
{
	seq_printf(m, "@RCTYPE@\n");
#ifdef DEBUG
	printk(KERN_INFO "rctype=@RCTYPE@\n");
#endif
	return 0;
}

int get_ov_rcname(struct seq_file *m, void* data)
{
	seq_printf(m, "@RCNAME@\n");
#ifdef DEBUG
	printk(KERN_INFO "rcname=@RCNAME@\n");
#endif
	return 0;
}

int get_ov_rcidnum(struct seq_file *m, void* data)
{
	seq_printf(m, "@RCIDNUM@\n");
#ifdef DEBUG
	printk(KERN_INFO "rcidnum=@RCIDNUM@\n");
#endif
	return 0;
}

int get_ov_smallflash(struct seq_file *m, void* data)
{
	seq_printf(m, "@HAVE_SMALLFLASH@\n");
#ifdef DEBUG
	printk(KERN_INFO "smallflash=@HAVE_SMALLFLASH@\n");
#endif
	return 0;
}

int get_ov_middleflash(struct seq_file *m, void* data)
{
	seq_printf(m, "@HAVE_MIDDLEFLASH@\n");
#ifdef DEBUG
	printk(KERN_INFO "middleflash=@HAVE_MIDDLEFLASH@\n");
#endif
	return 0;
}

int get_ov_imagedir(struct seq_file *m, void* data)
{
	seq_printf(m, "@IMAGEDIR@\n");
#ifdef DEBUG
	printk(KERN_INFO "imagedir=@IMAGEDIR@\n");
#endif
	return 0;
}

int get_ov_imagefs(struct seq_file *m, void* data)
{
	seq_printf(m, "@IMAGE_FSTYPES@\n");
#ifdef DEBUG
	printk(KERN_INFO "imagefs=@IMAGE_FSTYPES@\n");
#endif
	return 0;
}

int get_ov_mtdbootfs(struct seq_file *m, void* data)
{
	seq_printf(m, "@MTD_BOOTFS@\n");
#ifdef DEBUG
	printk(KERN_INFO "mtdbootfs=@MTD_BOOTFS@\n");
#endif
	return 0;
}

int get_ov_mtdrootfs(struct seq_file *m, void* data)
{
	seq_printf(m, "@MTD_ROOTFS@\n");
#ifdef DEBUG
	printk(KERN_INFO "mtdrootfs=@MTD_ROOTFS@\n");
#endif
	return 0;
}

int get_ov_mtdkernel(struct seq_file *m, void* data)
{
	seq_printf(m, "@MTD_KERNEL@\n");
#ifdef DEBUG
	printk(KERN_INFO "mtdkernel=@MTD_KERNEL@\n");
#endif
	return 0;
}

int get_ov_rootfile(struct seq_file *m, void* data)
{
	seq_printf(m, "@ROOTFS_FILE@\n");
#ifdef DEBUG
	printk(KERN_INFO "rootfile=@ROOTFS_FILE@\n");
#endif
	return 0;
}

int get_ov_kernelfile(struct seq_file *m, void* data)
{
	seq_printf(m, "@KERNEL_FILE@\n");
#ifdef DEBUG
	printk(KERN_INFO "kernelfile=@KERNEL_FILE@\n");
#endif
	return 0;
}

int get_ov_mkubifs(struct seq_file *m, void* data)
{
	seq_printf(m, "@MKUBIFS_ARGS@\n");
#ifdef DEBUG
	printk(KERN_INFO "mkubifs=@MKUBIFS_ARGS@\n");
#endif
	return 0;
}

int get_ov_ubinize(struct seq_file *m, void* data)
{
	seq_printf(m, "@UBINIZE_ARGS@\n");
#ifdef DEBUG
	printk(KERN_INFO "ubinize=@UBINIZE_ARGS@\n");
#endif
	return 0;
}

int get_ov_forcemode(struct seq_file *m, void* data)
{
	seq_printf(m, "@FORCE@\n");
#ifdef DEBUG
	printk(KERN_INFO "forcemode=@FORCE@\n");
#endif
	return 0;
}

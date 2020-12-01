#include "openvision_procfs.h"

int get_ov_model(struct seq_file *m, void* data)
{
	seq_printf(m, "@MACHINE@\n");
	printk(KERN_INFO "model=@MACHINE@\n");
	return 0;
}

int get_ov_brand(struct seq_file *m, void* data)
{
	seq_printf(m, "@BOX_BRAND@\n");
	printk(KERN_INFO "brand=@BOX_BRAND@\n");
	return 0;
}

int get_ov_platform(struct seq_file *m, void* data)
{
	seq_printf(m, "@STB_PLATFORM@\n");
	printk(KERN_INFO "platform=@STB_PLATFORM@\n");
	return 0;
}

int get_ov_visionversion(struct seq_file *m, void* data)
{
	seq_printf(m, "@VISIONVERSION@\n");
	printk(KERN_INFO "visionversion=@VISIONVERSION@\n");
	return 0;
}

int get_ov_visionrevision(struct seq_file *m, void* data)
{
	seq_printf(m, "@VISIONREVISION@\n");
	printk(KERN_INFO "visionrevision=@VISIONREVISION@\n");
	return 0;
}

int get_ov_visionlanguage(struct seq_file *m, void* data)
{
	seq_printf(m, "@VISIONLANGUAGE@\n");
	printk(KERN_INFO "visionlanguage=@VISIONLANGUAGE@\n");
	return 0;
}

int get_ov_developername(struct seq_file *m, void* data)
{
	seq_printf(m, "@DEVELOPER_NAME@\n");
	printk(KERN_INFO "developername=@DEVELOPER_NAME@\n");
	return 0;
}

int get_ov_feedsurl(struct seq_file *m, void* data)
{
	seq_printf(m, "@DISTRO_FEED_URI@\n");
	printk(KERN_INFO "feedsurl=@DISTRO_FEED_URI@\n");
	return 0;
}

int get_ov_distro(struct seq_file *m, void* data)
{
	seq_printf(m, "@DISTRO_NAME@\n");
	printk(KERN_INFO "distro=@DISTRO_NAME@\n");
	return 0;
}

int get_ov_oe(struct seq_file *m, void* data)
{
	seq_printf(m, "@BUILD_VERSION@\n");
	printk(KERN_INFO "oe=@BUILD_VERSION@\n");
	return 0;
}

int get_ov_kernel(struct seq_file *m, void* data)
{
	seq_printf(m, "@KERNELVERSION@\n");
	printk(KERN_INFO "kernel=@KERNELVERSION@\n");
	return 0;
}

int get_ov_python(struct seq_file *m, void* data)
{
	seq_printf(m, "@PREFERRED_VERSION_python@\n");
	printk(KERN_INFO "python=@PREFERRED_VERSION_python@\n");
	return 0;
}

int get_ov_mediaservice(struct seq_file *m, void* data)
{
	seq_printf(m, "@PREFERRED_PROVIDER_virtual/enigma2-mediaservice@\n");
	printk(KERN_INFO "mediaservice=@PREFERRED_PROVIDER_virtual/enigma2-mediaservice@\n");
	return 0;
}

int get_ov_multilib(struct seq_file *m, void* data)
{
	seq_printf(m, "@HAVE_MULTILIB@\n");
	printk(KERN_INFO "multilib=@HAVE_MULTILIB@\n");
	return 0;
}

int get_ov_architecture(struct seq_file *m, void* data)
{
	seq_printf(m, "@DEFAULTTUNE@\n");
	printk(KERN_INFO "architecture=@DEFAULTTUNE@\n");
	return 0;
}

int get_ov_socfamily(struct seq_file *m, void* data)
{
	seq_printf(m, "@SOC_FAMILY@\n");
	printk(KERN_INFO "socfamily=@SOC_FAMILY@\n");
	return 0;
}

int get_ov_blindscanbinary(struct seq_file *m, void* data)
{
	seq_printf(m, "@BLINDSCAN_BINARY@\n");
	printk(KERN_INFO "blindscanbinary=@BLINDSCAN_BINARY@\n");
	return 0;
}

int get_ov_rctype(struct seq_file *m, void* data)
{
	seq_printf(m, "@RCTYPE@\n");
	printk(KERN_INFO "rctype=@RCTYPE@\n");
	return 0;
}

int get_ov_rcname(struct seq_file *m, void* data)
{
	seq_printf(m, "@RCNAME@\n");
	printk(KERN_INFO "rcname=@RCNAME@\n");
	return 0;
}

int get_ov_rcidnum(struct seq_file *m, void* data)
{
	seq_printf(m, "@RCIDNUM@\n");
	printk(KERN_INFO "rcidnum=@RCIDNUM@\n");
	return 0;
}

int get_ov_smallflash(struct seq_file *m, void* data)
{
	seq_printf(m, "@HAVE_SMALLFLASH@\n");
	printk(KERN_INFO "smallflash=@HAVE_SMALLFLASH@\n");
	return 0;
}

int get_ov_middleflash(struct seq_file *m, void* data)
{
	seq_printf(m, "@HAVE_MIDDLEFLASH@\n");
	printk(KERN_INFO "middleflash=@HAVE_MIDDLEFLASH@\n");
	return 0;
}

int get_ov_imagedir(struct seq_file *m, void* data)
{
	seq_printf(m, "@IMAGEDIR@\n");
	printk(KERN_INFO "imagedir=@IMAGEDIR@\n");
	return 0;
}

int get_ov_imagefs(struct seq_file *m, void* data)
{
	seq_printf(m, "@IMAGE_FSTYPES@\n");
	printk(KERN_INFO "imagefs=@IMAGE_FSTYPES@\n");
	return 0;
}

int get_ov_mtdbootfs(struct seq_file *m, void* data)
{
	seq_printf(m, "@MTD_BOOTFS@\n");
	printk(KERN_INFO "mtdbootfs=@MTD_BOOTFS@\n");
	return 0;
}

int get_ov_mtdrootfs(struct seq_file *m, void* data)
{
	seq_printf(m, "@MTD_ROOTFS@\n");
	printk(KERN_INFO "mtdrootfs=@MTD_ROOTFS@\n");
	return 0;
}

int get_ov_mtdkernel(struct seq_file *m, void* data)
{
	seq_printf(m, "@MTD_KERNEL@\n");
	printk(KERN_INFO "mtdkernel=@MTD_KERNEL@\n");
	return 0;
}

int get_ov_rootfile(struct seq_file *m, void* data)
{
	seq_printf(m, "@ROOTFS_FILE@\n");
	printk(KERN_INFO "rootfile=@ROOTFS_FILE@\n");
	return 0;
}

int get_ov_kernelfile(struct seq_file *m, void* data)
{
	seq_printf(m, "@KERNEL_FILE@\n");
	printk(KERN_INFO "kernelfile=@KERNEL_FILE@\n");
	return 0;
}

int get_ov_mkubifs(struct seq_file *m, void* data)
{
	seq_printf(m, "@MKUBIFS_ARGS@\n");
	printk(KERN_INFO "mkubifs=@MKUBIFS_ARGS@\n");
	return 0;
}

int get_ov_ubinize(struct seq_file *m, void* data)
{
	seq_printf(m, "@UBINIZE_ARGS@\n");
	printk(KERN_INFO "ubinize=@UBINIZE_ARGS@\n");
	return 0;
}

int get_ov_forcemode(struct seq_file *m, void* data)
{
	seq_printf(m, "@FORCE@\n");
	printk(KERN_INFO "forcemode=@FORCE@\n");
	return 0;
}

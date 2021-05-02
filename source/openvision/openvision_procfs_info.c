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

int get_ov_compiledate(struct seq_file *m, void* data)
{
	seq_printf(m, "@DATE@\n");
#ifdef DEBUG
	printk(KERN_INFO "compiledate=@DATE@\n");
#endif
	return 0;
}

int get_ov_fpu(struct seq_file *m, void* data)
{
	seq_printf(m, "@TARGET_FPU@\n");
#ifdef DEBUG
	printk(KERN_INFO "fpu=@TARGET_FPU@\n");
#endif
	return 0;
}

int get_ov_displaytype(struct seq_file *m, void* data)
{
	seq_printf(m, "@DISPLAY_TYPE@\n");
#ifdef DEBUG
	printk(KERN_INFO "displaytype=@DISPLAY_TYPE@\n");
#endif
	return 0;
}

int get_ov_transcoding(struct seq_file *m, void* data)
{
	seq_printf(m, "@HAVE_TRANSCODING@\n");
#ifdef DEBUG
	printk(KERN_INFO "transcoding=@HAVE_TRANSCODING@\n");
#endif
	return 0;
}

int get_ov_multitranscoding(struct seq_file *m, void* data)
{
	seq_printf(m, "@HAVE_MULTITRANSCODING@\n");
#ifdef DEBUG
	printk(KERN_INFO "multitranscoding=@HAVE_MULTITRANSCODING@\n");
#endif
	return 0;
}

int get_ov_hdmi(struct seq_file *m, void* data)
{
	seq_printf(m, "@HAVE_HDMI@\n");
#ifdef DEBUG
	printk(KERN_INFO "hdmi=@HAVE_HDMI@\n");
#endif
	return 0;
}

int get_ov_yuv(struct seq_file *m, void* data)
{
	seq_printf(m, "@HAVE_YUV@\n");
#ifdef DEBUG
	printk(KERN_INFO "yuv=@HAVE_YUV@\n");
#endif
	return 0;
}

int get_ov_rca(struct seq_file *m, void* data)
{
	seq_printf(m, "@HAVE_RCA@\n");
#ifdef DEBUG
	printk(KERN_INFO "rca=@HAVE_RCA@\n");
#endif
	return 0;
}

int get_ov_avjack(struct seq_file *m, void* data)
{
	seq_printf(m, "@HAVE_AV_JACK@\n");
#ifdef DEBUG
	printk(KERN_INFO "avjack=@HAVE_AV_JACK@\n");
#endif
	return 0;
}

int get_ov_scart(struct seq_file *m, void* data)
{
	seq_printf(m, "@HAVE_SCART@\n");
#ifdef DEBUG
	printk(KERN_INFO "scart=@HAVE_SCART@\n");
#endif
	return 0;
}

int get_ov_dvi(struct seq_file *m, void* data)
{
	seq_printf(m, "@HAVE_DVI@\n");
#ifdef DEBUG
	printk(KERN_INFO "dvi=@HAVE_DVI@\n");
#endif
	return 0;
}

int get_ov_svideo(struct seq_file *m, void* data)
{
	seq_printf(m, "@HAVE_SVIDEO@\n");
#ifdef DEBUG
	printk(KERN_INFO "svideo=@HAVE_SVIDEO@\n");
#endif
	return 0;
}

int get_ov_hdmihdin(struct seq_file *m, void* data)
{
	seq_printf(m, "@HAVE_HDMI_IN_HD@\n");
#ifdef DEBUG
	printk(KERN_INFO "hdmihdin=@HAVE_HDMI_IN_HD@\n");
#endif
	return 0;
}

int get_ov_hdmifhdin(struct seq_file *m, void* data)
{
	seq_printf(m, "@HAVE_HDMI_IN_FHD@\n");
#ifdef DEBUG
	printk(KERN_INFO "hdmifhdin=@HAVE_HDMI_IN_FHD@\n");
#endif
	return 0;
}

int get_ov_wol(struct seq_file *m, void* data)
{
	seq_printf(m, "@HAVE_WOL@\n");
#ifdef DEBUG
	printk(KERN_INFO "wol=@HAVE_WOL@\n");
#endif
	return 0;
}

int get_ov_ci(struct seq_file *m, void* data)
{
	seq_printf(m, "@HAVE_CI@\n");
#ifdef DEBUG
	printk(KERN_INFO "ci=@HAVE_CI@\n");
#endif
	return 0;
}

int get_ov_vfdsymbol(struct seq_file *m, void* data)
{
	seq_printf(m, "@HAVE_VFDSYMBOL@\n");
#ifdef DEBUG
	printk(KERN_INFO "vfdsymbol=@HAVE_VFDSYMBOL@\n");
#endif
	return 0;
}

int get_ov_fhdskin(struct seq_file *m, void* data)
{
	seq_printf(m, "@HAVE_FHDSKIN@\n");
#ifdef DEBUG
	printk(KERN_INFO "fhdskin=@HAVE_FHDSKIN@\n");
#endif
	return 0;
}

int get_ov_dboxlcd(struct seq_file *m, void* data)
{
	seq_printf(m, "@SUPPORT_DBOXLCD@\n");
#ifdef DEBUG
	printk(KERN_INFO "dboxlcd=@SUPPORT_DBOXLCD@\n");
#endif
	return 0;
}

int get_ov_imageversion(struct seq_file *m, void* data)
{
	seq_printf(m, "@DISTRO_VERSION@\n");
#ifdef DEBUG
	printk(KERN_INFO "imageversion(=@DISTRO_VERSION@\n");
#endif
	return 0;
}

int get_ov_imagebuild(struct seq_file *m, void* data)
{
	seq_printf(m, "@BUILD_VERSION@\n");
#ifdef DEBUG
	printk(KERN_INFO "imagebuild(=@BUILD_VERSION@\n");
#endif
	return 0;
}

int get_ov_imagedevbuild(struct seq_file *m, void* data)
{
	seq_printf(m, "@DEVELOPER_BUILD_VERSION@\n");
#ifdef DEBUG
	printk(KERN_INFO "imagedevbuild(=@DEVELOPER_BUILD_VERSION@\n");
#endif
	return 0;
}

int get_ov_imagetype(struct seq_file *m, void* data)
{
	seq_printf(m, "@DISTRO_TYPE@\n");
#ifdef DEBUG
	printk(KERN_INFO "imagetype(=@DISTRO_TYPE@\n");
#endif
	return 0;
}

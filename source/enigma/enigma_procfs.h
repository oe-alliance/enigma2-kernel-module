#include <linux/version.h>
#include <linux/string.h>
#include <linux/module.h>
#include <linux/slab.h>
#include <linux/namei.h>
#include <linux/seq_file.h>
#include <linux/proc_fs.h>
#include <linux/delay.h>
#include <linux/uaccess.h>
#include <linux/platform_device.h>
#include <linux/kernel.h>

#define MAX_CHAR_LENGTH 256
#define cProcDir	1
#define cProcEntry	2

struct ProcWriteInfo
{
	int proc_i;
	int count;
	int ipage;
	char *bpage;
	const char __user *ubuf;
};

typedef int (*proc_read_t) (struct seq_file *m, void* data);
typedef int (*proc_write_t_e2) (struct ProcWriteInfo *proc_info, char *kbuf);

struct ProcStructure_s
{
	int type;
	char* name;
	struct proc_dir_entry* entry;
	proc_read_t read_proc;
	proc_write_t_e2 write_proc;
	struct ProcWriteInfo* proc_info;
	void* identifier; /* needed for cpp stuff */
};

struct file* file_open(const char* path, int flags, int rights);
void file_close(struct file* file);
int file_read(struct file* file, unsigned char* data, unsigned int size);
int file_write(struct file* file, unsigned char* data, unsigned int size);
int remove_file(char *path);
int save_data_to_file(char *path, int flags, char *data, int size);
char * dirname(char * name);
char * basename(char * name);

int get_ov_model(struct seq_file *m, void* data);
int get_ov_displaymodel(struct seq_file *m, void* data);
int get_ov_brand(struct seq_file *m, void* data);
int get_ov_displaybrand(struct seq_file *m, void* data);
int get_ov_platform(struct seq_file *m, void* data);
int get_ov_imgversion(struct seq_file *m, void* data);
int get_ov_imgrevision(struct seq_file *m, void* data);
int get_ov_imglanguage(struct seq_file *m, void* data);
int get_ov_developername(struct seq_file *m, void* data);
int get_ov_feedsurl(struct seq_file *m, void* data);
int get_ov_distro(struct seq_file *m, void* data);
int get_ov_oe(struct seq_file *m, void* data);
int get_ov_kernel(struct seq_file *m, void* data);
int get_ov_python(struct seq_file *m, void* data);
int get_ov_mediaservice(struct seq_file *m, void* data);
int get_ov_multilib(struct seq_file *m, void* data);
int get_ov_architecture(struct seq_file *m, void* data);
int get_ov_socfamily(struct seq_file *m, void* data);
int get_ov_blindscanbinary(struct seq_file *m, void* data);
int get_ov_rctype(struct seq_file *m, void* data);
int get_ov_rcname(struct seq_file *m, void* data);
int get_ov_rcidnum(struct seq_file *m, void* data);
int get_ov_smallflash(struct seq_file *m, void* data);
int get_ov_middleflash(struct seq_file *m, void* data);
int get_ov_imagedir(struct seq_file *m, void* data);
int get_ov_imagefs(struct seq_file *m, void* data);
int get_ov_mtdbootfs(struct seq_file *m, void* data);
int get_ov_mtdrootfs(struct seq_file *m, void* data);
int get_ov_mtdkernel(struct seq_file *m, void* data);
int get_ov_rootfile(struct seq_file *m, void* data);
int get_ov_kernelfile(struct seq_file *m, void* data);
int get_ov_mkubifs(struct seq_file *m, void* data);
int get_ov_ubinize(struct seq_file *m, void* data);
int get_ov_forcemode(struct seq_file *m, void* data);
int get_ov_compiledate(struct seq_file *m, void* data);
int get_ov_fpu(struct seq_file *m, void* data);
int get_ov_displaytype(struct seq_file *m, void* data);
int get_ov_transcoding(struct seq_file *m, void* data);
int get_ov_multitranscoding(struct seq_file *m, void* data);
int get_ov_hdmi(struct seq_file *m, void* data);
int get_ov_yuv(struct seq_file *m, void* data);
int get_ov_rca(struct seq_file *m, void* data);
int get_ov_avjack(struct seq_file *m, void* data);
int get_ov_scart(struct seq_file *m, void* data);
int get_ov_dvi(struct seq_file *m, void* data);
int get_ov_svideo(struct seq_file *m, void* data);
int get_ov_hdmihdin(struct seq_file *m, void* data);
int get_ov_hdmifhdin(struct seq_file *m, void* data);
int get_ov_wol(struct seq_file *m, void* data);
int get_ov_ci(struct seq_file *m, void* data);
int get_ov_vfdsymbol(struct seq_file *m, void* data);
int get_ov_fhdskin(struct seq_file *m, void* data);
int get_ov_dboxlcd(struct seq_file *m, void* data);
int get_ov_imageversion(struct seq_file *m, void* data);
int get_ov_imagebuild(struct seq_file *m, void* data);
int get_ov_imagedevbuild(struct seq_file *m, void* data);
int get_ov_imagetype(struct seq_file *m, void* data);

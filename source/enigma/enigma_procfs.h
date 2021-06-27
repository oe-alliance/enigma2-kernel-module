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

int get_model(struct seq_file *m, void* data);
int get_displaymodel(struct seq_file *m, void* data);
int get_brand(struct seq_file *m, void* data);
int get_displaybrand(struct seq_file *m, void* data);
int get_platform(struct seq_file *m, void* data);
int get_imgversion(struct seq_file *m, void* data);
int get_imgrevision(struct seq_file *m, void* data);
int get_imglanguage(struct seq_file *m, void* data);
int get_developername(struct seq_file *m, void* data);
int get_feedsurl(struct seq_file *m, void* data);
int get_distro(struct seq_file *m, void* data);
int get_oe(struct seq_file *m, void* data);
int get_kernel(struct seq_file *m, void* data);
int get_python(struct seq_file *m, void* data);
int get_mediaservice(struct seq_file *m, void* data);
int get_multilib(struct seq_file *m, void* data);
int get_architecture(struct seq_file *m, void* data);
int get_socfamily(struct seq_file *m, void* data);
int get_blindscanbinary(struct seq_file *m, void* data);
int get_rctype(struct seq_file *m, void* data);
int get_rcname(struct seq_file *m, void* data);
int get_rcidnum(struct seq_file *m, void* data);
int get_smallflash(struct seq_file *m, void* data);
int get_middleflash(struct seq_file *m, void* data);
int get_imagedir(struct seq_file *m, void* data);
int get_imagefs(struct seq_file *m, void* data);
int get_mtdbootfs(struct seq_file *m, void* data);
int get_mtdrootfs(struct seq_file *m, void* data);
int get_mtdkernel(struct seq_file *m, void* data);
int get_rootfile(struct seq_file *m, void* data);
int get_kernelfile(struct seq_file *m, void* data);
int get_mkubifs(struct seq_file *m, void* data);
int get_ubinize(struct seq_file *m, void* data);
int get_forcemode(struct seq_file *m, void* data);
int get_compiledate(struct seq_file *m, void* data);
int get_fpu(struct seq_file *m, void* data);
int get_displaytype(struct seq_file *m, void* data);
int get_transcoding(struct seq_file *m, void* data);
int get_multitranscoding(struct seq_file *m, void* data);
int get_hdmi(struct seq_file *m, void* data);
int get_yuv(struct seq_file *m, void* data);
int get_rca(struct seq_file *m, void* data);
int get_avjack(struct seq_file *m, void* data);
int get_scart(struct seq_file *m, void* data);
int get_dvi(struct seq_file *m, void* data);
int get_svideo(struct seq_file *m, void* data);
int get_hdmihdin(struct seq_file *m, void* data);
int get_hdmifhdin(struct seq_file *m, void* data);
int get_wol(struct seq_file *m, void* data);
int get_ci(struct seq_file *m, void* data);
int get_vfdsymbol(struct seq_file *m, void* data);
int get_fhdskin(struct seq_file *m, void* data);
int get_dboxlcd(struct seq_file *m, void* data);
int get_imageversion(struct seq_file *m, void* data);
int get_imagebuild(struct seq_file *m, void* data);
int get_imagedevbuild(struct seq_file *m, void* data);
int get_imagetype(struct seq_file *m, void* data);

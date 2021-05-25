# KERNEL_VERSION	:= `uname -r`
# KERNEL_DIR	:= /lib/modules/$(KERNEL_VERSION)/build
PWD		:= $(shell pwd)

ifeq ($(KERNELRELEASE),)
all: modules

modules:
	$(MAKE) ARCH=$(ARCH) CROSS_COMPILE=$(CROSS_COMPILE) -C $(KSRC) M=$(shell pwd) modules

strip:
	$(CROSS_COMPILE)strip enigma.ko --strip-unneeded

clean: $(clean_more)
	rm -fr *.mod.c *.mod *.o .*.cmd *.ko *~
	rm -fr .tmp_versions
	rm -fr Module.symvers ; rm -fr Module.markers ; rm -fr modules.order
	cd core ; rm -fr *.mod.c *.mod *.o .*.cmd *.ko
	cd hal ; rm -fr *.mod.c *.mod *.o .*.cmd *.ko
	cd os_dep ; rm -fr *.mod.c *.mod *.o .*.cmd *.ko
else
EXTRA_CFLAGS += -Wenum-compare
ccflags-y += -D__CHECK_ENDIAN__

enigma-y := \
	enigma_procfs_fileio.o \
	enigma_procfs_info.o \
	enigma_procfs_main.o
obj-m := \
	enigma.o

CFLAGS_trace.o := -I$(src)

endif

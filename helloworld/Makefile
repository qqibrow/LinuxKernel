ifneq ($(KERNELRELEASE),)
	obj-m += helloworld.o
else
	KDIR ?= /lib/modules/`uname -r`/build
default:
	$(MAKE) -C  $(KDIR) SUBDIRS=$(PWD) modules

clean:
	$(MAKE) -C  $(KDIR) SUBDIRS=$(PWD) clean
endif

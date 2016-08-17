# Variables pointing to different paths
KERNEL_DIR    	:= /lib/modules/$(shell uname -r)/build
PWD        	:= $(shell pwd)

# This is required to compile your myModule.c module
obj-m        := reverse.o

all: clean reverse

# We build our module in this section
reverse:
	@echo "Building the Reverse module..."
	@make -C $(KERNEL_DIR) SUBDIRS=$(PWD) modules

clean:
	-rm -f *.o *.ko .*.cmd .*.flags *.mod.c Module.symvers modules.order
	-rm -rf .tmp_versions

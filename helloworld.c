#include<linux/linkage.h>
#include<linux/kernel.h>

asmlinkage int sys_helloworld()
{
	printk("Hello world, from system call\n");
	return 1;
}


#include <linux/unistd.h>
#include <sys/syscall.h>

#define sys_helloworld 312

int main(void)
{
	int i;
	i = syscall(sys_helloworld);
	return 0;
}

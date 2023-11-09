#include <stdio.h>
#include <unistd.h>

int main()
{
	pid_t pid, ppid;

	pid = getpid();
	ppid = getppid();

	printf("process id = %d\nparent process id = %d\n", pid, ppid);

	return (0);
}

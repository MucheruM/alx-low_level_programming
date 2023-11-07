#include <stdio.h>
#include <unistd.h>

int main()
{
	pid_t pid;

	pid = fork();
	if (pid < 0)
	{
		perror("Unsuccessful\n");
		return (1);
	}
	else if (pid == 0)
	{
		sleep(5);
		printf("%u : I am the child process\n", getpid());
	}
	else
		printf("%u : I am the parent process\n", getppid());
	return (0);
}

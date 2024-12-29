#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>

int main(int ac, char *av[])
{
	if (ac != 3)
		return (-1);
	int pid = atoi(av[1]);
	int sig = atoi(av[2]);
	printf("send %d signal to the pid %d.\n", sig, pid);
	kill(pid, sig);
	return (0);
}

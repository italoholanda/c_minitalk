#include "minitalk.h"

void print_usage(void)
{
	ft_printf("\n\nCLIENT USAGE:\n\n./client <PID> \"<MESSAGE>\"\n\n");
}

static void	action(int sig)
{
	int bin;

	bin = 1;
	if (sig == SIGUSR1)
		bin = 0;
	ft_printf("sending %i...\n", bin);
}

static void	mt_kill(int pid, char *str)
{
	int		i;
	char	c;

	while (*str)
	{
		i = 8;
		c = *str++;
		while (i--)
		{
			if (c >> i & 1)
				kill(pid, SIGUSR2);
			else
				kill(pid, SIGUSR1);
			usleep(100);
		}
	}
	i = 8;
	while (i--)
	{
		kill(pid, SIGUSR1);
		usleep(100);
	}
}

int main(int argc, char **argv)
{
	int	pid;

	if (argc != 3) {
		print_usage();
		exit(1);
	}
		
	pid = ft_atoi(argv[1]);
	ft_printf("\nPID: %i\n", pid);
	signal(SIGUSR1, action);
	signal(SIGUSR2, action);
	mt_kill(pid, argv[2]);

	ft_printf("\nProcess %i received %s\n", pid, argv[2]);

	argc++;
}
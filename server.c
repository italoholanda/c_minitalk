#include "minitalk.h"

static void handle_action(int sig, siginfo_t *info, void *context)
{
	static int				i = 0;
	static unsigned char	c = 0;

	c |= (sig == SIGUSR2);
	if (++i == 8)
	{
		i = 0;
		ft_putchar_fd(c, 1);
		c = 0;
	}
	else
		c <<= 1;

	if (!info)	
		(void)context;
}

int main(void)
{
	struct sigaction s_sigaction;

	ft_printf("\nPID: %i\n", getpid());
	s_sigaction.sa_sigaction = handle_action;
	s_sigaction.sa_flags = SA_SIGINFO;
	sigaction(SIGUSR1, &s_sigaction, 0);
	sigaction(SIGUSR2, &s_sigaction, 0);
	while (1)
		pause();
	return 0;
}
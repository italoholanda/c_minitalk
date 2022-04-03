/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 09:12:54 by italo             #+#    #+#             */
/*   Updated: 2022/04/03 11:05:43 by igomes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	print_usage(void)
{
	ft_printf("\033[1;31m");
	ft_printf("\nCLIENT USAGE:\n\033[1;37m./client <PID> \"<MESSAGE>\"\n\n");
}

void	handle_signal(int signal, siginfo_t *info, void *context)
{
	if (signal)
		ft_printf("\033[0;33mReceived ...\n\033[1;37m");
	if (info || context)
		return ;
}

static void	mt_kill(int pid, char *str)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (str[i])
	{
		j = 8;
		c = str[i++];
		while (j--)
		{
			if (c >> j & 1)
				kill(pid, SIGUSR2);
			else
				kill(pid, SIGUSR1);
			usleep(100);
		}
	}
}

int	main(int argc, char **argv)
{
	int					pid;
	struct sigaction	sigas;

	if (argc != 3)
	{
		print_usage();
		exit(1);
	}
	pid = ft_atoi(argv[1]);
	sigas.sa_sigaction = handle_signal;
	sigas.sa_flags = SA_SIGINFO;
	sigaction(SIGUSR1, &sigas, 0);
	sigaction(SIGUSR2, &sigas, 0);
	mt_kill(pid, argv[2]);
	ft_printf("\nProcess [%i] received \"%s\"\n", pid, argv[2]);
	return (0);
}

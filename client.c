/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 09:12:54 by italo             #+#    #+#             */
/*   Updated: 2022/04/05 17:18:42 by igomes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	print_usage(void)
{
	ft_printf("\033[1;31m");
	ft_printf("\nCLIENT USAGE:\n\033[1;37m./client <PID> \"<MESSAGE>\"\n\n");
}

void	print_response(int signal, siginfo_t *info, void *ctx)
{
	if (signal)
		ft_printf("\033[0;33mReceived ...\n\033[1;37m");
	if (info || ctx)
		return ;
}

/*
	This convertss a string to a sequence of bits
*/
static void	send_string(int pid, char *str)
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
			usleep(10000);
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
	sigas.sa_sigaction = print_response;
	sigas.sa_flags = SA_SIGINFO;
	sigaction(SIGUSR1, &sigas, 0);
	sigaction(SIGUSR2, &sigas, 0);
	send_string(pid, argv[2]);
	ft_printf("\nProcess [%i] received \"%s\"\n", pid, argv[2]);
	return (0);
}

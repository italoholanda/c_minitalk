/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 09:12:54 by italo             #+#    #+#             */
/*   Updated: 2022/04/03 09:34:00 by igomes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	print_usage(void)
{
	ft_printf("\n\nCLIENT USAGE:\n\n./client <PID> \"<MESSAGE>\"\n\n");
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
	int	pid;

	if (argc != 3)
	{
		print_usage();
		exit(1);
	}
	pid = ft_atoi(argv[1]);
	ft_printf("\nPID: %i\n", pid);
	mt_kill(pid, argv[2]);
	ft_printf("\nProcess %i received %s\n", pid, argv[2]);
	return (0);
}

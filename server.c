/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 09:13:08 by italo             #+#    #+#             */
/*   Updated: 2022/04/05 17:18:22 by igomes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

/*
	This converts a sequence of bits to a char and then
	writes it to the screen and sends a response to the client
*/
static void	print_signal(int signal, siginfo_t *info, void *ctx)
{
	static int				i = 0;
	static unsigned char	c = 0;

	c |= (signal == SIGUSR2);
	if (++i == 8)
	{
		i = 0;
		ft_putchar_fd(c, 1);
		kill(info->si_pid, SIGUSR1);
		c = 0;
	}
	else
		c <<= 1;
	if (!info)
		(void)ctx;
}

int	main(void)
{
	struct sigaction	sigas;

	ft_printf("\n\033[1;32mPID: \033[1;37m%i\n", getpid());
	sigas.sa_sigaction = print_signal;
	sigas.sa_flags = SA_SIGINFO;
	sigaction(SIGUSR1, &sigas, 0);
	sigaction(SIGUSR2, &sigas, 0);
	while (1)
		pause();
	return (0);
}

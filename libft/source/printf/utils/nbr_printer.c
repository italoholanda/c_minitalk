/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nbr_printer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 20:20:27 by coder             #+#    #+#             */
/*   Updated: 2021/11/20 22:39:23 by igomes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/ft_printf.h"
#include "../../../include/libft.h"

int	nbr_printer(int n)
{
	int	count;

	ft_putnbr_fd(n, 1);
	count = 1;
	while (n <= -10 || n >= 10)
	{
		count++;
		n /= 10;
	}
	if (n < 0)
		count++;
	return (count);
}

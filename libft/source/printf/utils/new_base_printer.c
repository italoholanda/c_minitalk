/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_base_printer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 21:00:03 by igomes-h          #+#    #+#             */
/*   Updated: 2021/11/21 17:44:16 by igomes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/libft.h"

int	new_base_printer(unsigned long long nbr, const char *base)
{
	int	s;
	int	base_len;

	s = 1;
	base_len = ft_strlen(base);
	if (nbr >= (unsigned long long)base_len)
	{
		s = new_base_printer(nbr / base_len, base);
		return (s + new_base_printer(nbr % base_len, base));
	}
	else
	{
		if (nbr < 0)
			nbr *= -1;
		ft_putchar_fd(base[nbr], 1);
		return (s);
	}
	return (0);
}

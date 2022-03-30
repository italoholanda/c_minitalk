/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_printer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 10:56:07 by coder             #+#    #+#             */
/*   Updated: 2021/11/20 21:37:15 by igomes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/ft_printf.h"

int	str_printer(char *str)
{
	if (str)
	{
		ft_putstr_fd(str, 1);
		return ((int)ft_strlen(str));
	}
	ft_putstr_fd("(null)", 1);
	return (6);
}

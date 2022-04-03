/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uphex_printer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 19:32:05 by igomes-h          #+#    #+#             */
/*   Updated: 2021/11/21 17:24:03 by igomes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/libft.h"
#include "../../../include/ft_printf.h"

int	uphex_printer(unsigned int hex)
{
	return (new_base_printer(hex, "0123456789ABCDEF"));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 11:00:06 by igomes-h          #+#    #+#             */
/*   Updated: 2021/08/26 16:23:52 by igomes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	*ft_memset(void *mem, int byte, size_t len)
{
	char	*new_mem;
	size_t	iterator;

	new_mem = mem;
	iterator = 0;
	while (iterator < len)
	{
		new_mem[iterator] = (unsigned char)byte;
		++iterator;
	}
	return (mem);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 09:13:10 by igomes-h          #+#    #+#             */
/*   Updated: 2021/09/08 20:37:48 by igomes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (0);
	i = 0;
	if (dest < src)
		ft_memcpy(dest, src, n);
	else
	{
		i = n - 1;
		while ((int)i >= 0)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i--;
		}
	}
	return (dest);
}

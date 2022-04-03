/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 13:52:09 by igomes-h          #+#    #+#             */
/*   Updated: 2021/09/10 16:34:51 by igomes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	i;
	unsigned char	*n_s1;
	unsigned char	*n_s2;

	i = 0;
	n_s1 = (unsigned char *)s1;
	n_s2 = (unsigned char *)s2;
	while (i < n)
	{
		if (n_s1[i] != n_s2[i])
			return ((int)(n_s1[i] - n_s2[i]));
		++i;
	}
	return (0);
}

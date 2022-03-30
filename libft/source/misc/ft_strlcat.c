/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 10:42:24 by igomes-h          #+#    #+#             */
/*   Updated: 2021/09/03 15:44:56 by igomes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*new_src;
	size_t	dst_size;
	size_t	src_size;
	size_t	ret_size;
	size_t	i;

	new_src = (char *)src;
	dst_size = ft_strlen(dst);
	src_size = ft_strlen(new_src);
	ret_size = 0;
	i = 0;
	if (size > dst_size)
		ret_size = src_size + dst_size;
	else
		return (src_size + size);
	while (new_src[i] && (dst_size + 1) < size)
	{
		dst[dst_size] = new_src[i];
		dst_size++;
		i++;
	}
	dst[dst_size] = 0;
	return (ret_size);
}

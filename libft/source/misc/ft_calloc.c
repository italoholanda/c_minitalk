/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 10:10:35 by igomes-h          #+#    #+#             */
/*   Updated: 2021/09/10 16:43:04 by igomes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	*ft_calloc(size_t indexes, size_t index_size)
{
	void	*ptr;

	ptr = malloc(indexes * index_size);
	if (!ptr)
		return (0);
	ft_bzero(ptr, indexes * index_size);
	return (ptr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 17:39:51 by igomes-h          #+#    #+#             */
/*   Updated: 2021/09/14 14:25:18 by igomes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;
	size_t	i;

	if (!(*little))
		return ((char *)big);
	i = 0;
	little_len = ft_strlen(little);
	while (*big && (i < len))
	{
		if ((ft_strncmp((char *)big, (char *)little, little_len) == 0)
			&& (i + little_len <= len))
			return ((char *)big);
		big++;
		i++;
	}
	return (0);
}

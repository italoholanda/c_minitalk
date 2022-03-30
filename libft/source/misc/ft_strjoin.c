/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 14:07:05 by igomes-h          #+#    #+#             */
/*   Updated: 2021/09/14 11:49:14 by igomes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

static char	*ft_strcat(const char *s1, const char *s2, char *new_str)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < ft_strlen(s1))
	{
		new_str[i] = s1[i];
		++i;
	}
	while (i < ft_strlen(s1) + ft_strlen(s2))
	{
		new_str[i] = s2[j];
		++i;
		++j;
	}
	new_str[i] = 0;
	return (new_str);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*new_str;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	new_str = malloc((s1_len + s2_len) + 1);
	if (!new_str)
		return (0);
	ft_strcat(s1, s2, new_str);
	return (new_str);
}

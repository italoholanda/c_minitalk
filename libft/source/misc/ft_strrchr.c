/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 11:50:52 by igomes-h          #+#    #+#             */
/*   Updated: 2021/09/14 12:50:57 by igomes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		leng;

	str = (char *)s;
	leng = ft_strlen(s);
	if (!c)
		return (str + leng);
	while (leng >= 0)
	{
		if (str[leng] == (char)c)
			return (&str[leng]);
		leng--;
	}
	return (0);
}

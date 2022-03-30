/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 14:03:11 by igomes-h          #+#    #+#             */
/*   Updated: 2021/09/14 11:45:23 by igomes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

static int	breaker_ctr(const char *s, char breaker)
{
	unsigned int	i;
	unsigned int	b_len;

	i = 0;
	b_len = 0;
	while (s[i])
	{
		if (s[i] == breaker)
			i++;
		else
		{
			while (s[i] != breaker && s[i])
				i++;
			b_len++;
		}
	}
	return (b_len);
}

static char	**fill_table(char const *s, char breaker, char **table)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	k = 0;
	while (s[i])
	{
		if (s[i] == breaker)
			i++;
		else
		{
			j = 0;
			while (s[i] != breaker && s[i])
			{
				i++;
				j++;
			}
			table[k] = (char *)ft_calloc(j + 1, sizeof(char));
			ft_strlcpy(table[k], &s[i - j], j + 1);
			k++;
		}
	}
	return (table);
}

char	**ft_split(char const *s, char breaker)
{
	char	**table;

	table = (char **)ft_calloc(breaker_ctr(s, breaker) + 1, sizeof(char *));
	if (table)
		return (fill_table(s, breaker, table));
	return (0);
}

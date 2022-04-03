/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 21:41:25 by igomes-h          #+#    #+#             */
/*   Updated: 2021/09/14 11:42:58 by igomes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

static int	ft_isspace(char c)
{
	if ((c == '\n')
		|| (c == '\t')
		|| (c == '\v')
		|| (c == '\f')
		|| (c == '\r')
		|| (c == ' '))
		return (1);
	return (0);
}

int	ft_atoi(const char *s)
{
	int		i;
	int		signal;
	int		response;
	char	*str;

	i = 0;
	signal = 1;
	response = 0;
	str = (char *)s;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signal = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		response = (str[i] - '0') + (response * 10);
		i++;
	}
	return (response * signal);
}

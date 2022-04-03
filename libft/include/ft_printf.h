/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 02:06:54 by coder             #+#    #+#             */
/*   Updated: 2021/11/21 17:30:23 by igomes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include "./libft.h"
# ifndef ENV_KERNEL
#  define ENV_KERNEL "LINUX"
# endif

int	ft_printf(const char *str, ...);
int	nbr_printer(int n);
int	unint_printer(unsigned int n);
int	char_printer(char c);
int	str_printer(char *str);
int	new_base_printer(unsigned long long nbr, const char *base);
int	ptr_printer(unsigned long ptr);
int	lohex_printer(unsigned int hex);
int	uphex_printer(unsigned int hex);
int	pct_printer(void);

#endif

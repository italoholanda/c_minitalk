/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 11:00:16 by igomes-h          #+#    #+#             */
/*   Updated: 2021/09/14 11:56:29 by igomes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

/*
* ft_isprint(int c), is a function that's verify if the int is a printable char.
*/
int		ft_isprint(int c);
/*
* ft_isalnum(int c), is a function that's verify if the int is a
* alpha-numeric char.
*/
int		ft_isalnum(int c);
/*
* ft_isalpha(int c), is a function that's verify if the int is a alphabetc char.
*/
int		ft_isalpha(int c);
/*
* ft_isascii(int c), is a function that's verify if the int exists in the ASCII
* table.
*/
int		ft_isascii(int c);
/*
* ft_isdigit(int c), is a function that's verify if the int is a digit char.
*/
int		ft_isdigit(int c);
/*
* ft_toupper(int c), is a function that transforms a lowercase character into
* an uppercase. If input is a lowercase character, this will return an uppercase
* character. If not, it will return the char untouched.
*/
int		ft_toupper(int c);
/*
* ft_tolower(int c), is a function that transforms an uppercase character into
* a lowercase. If input is an uppercase character, this will return a lowercase
* character. If not, it will return the char untouched.
*/
int		ft_tolower(int c);
/*
* ft_atoi(char *str), is a function that transforms a string number to a int
* number. The function will ignore spaces and tabs before the number and will
* automatically calculate your signal, such as "   +-++-548".
* This will return an int based in the input string.
*/
int		ft_atoi(const char *str);
/*
* *ft_strdup(const char *s), is a function that will duplicate a string and
* return a pointer to the new string.
*/
char	*ft_strdup(const char *s);
/*
* *ft_strchr(const char *s, int c), is a function that will find the first
* occurrence of the input char (c) in the input string (s) and return a pointer
* for this.
*/
char	*ft_strchr(const char *s, int c);
/*
* *ft_strrchr(const char *s, int c), is a function that will find the last
* occurrence of the input char (c) in the input string (s) and return a pointer
* for this.
*/
char	*ft_strrchr(const char *s, int c);
/*
* *ft_strnstr(const char *big_s, const char *short_s, size_t len), is a function
* that will find the first occurrence of the input string (short_s) in the input
* string (big_s) and return a pointer for his first character.
*/
char	*ft_strnstr(const char *big_s, const char *short_s, size_t len);
/*
* ft_strncmp(char *s1, char *s2, unsigned int n), is a function that compares
* the first (n) bytes of the input strings (s1 and s2) and, if find a different
* char, returns the difference of their index values in the ASCII table.
*/
int		ft_strncmp(const char *s1, const char *s2, unsigned int n);
/*
* ft_strlen(const char *str), is a function that will count the number of chars
* in the input string.
*/
size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *str, char breaker);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	ft_bzero(void *mem, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memset(void *mem, int byte, size_t len);
void	*ft_calloc(size_t indexes, size_t index_size);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest,	const void *src, size_t	n);

#endif

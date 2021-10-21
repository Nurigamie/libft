/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 18:06:46 by mbuchet           #+#    #+#             */
/*   Updated: 2021/10/21 18:27:13 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stddef.h>
#include <limits.h>

/*int*/

int	ft_isalpha(int arg);
int	ft_isalnum(int c);
int	ft_isascii(int arg);
int	ft_isascii(int arg);
int	ft_isprint(int c);
int	ft_tolower(int c);
int	ft_toupper(int c)
int	ft_strncmp(const char *str1, const char *str2, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
int	ft_atoi(const char *str);

/*size_t*/
size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t size);

/*void*/
void    *ft_memset(void *str, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(char *dst, const void *src, size_t n);
void ft_memchr(const *s, int c, size_t length);
void	*ft_calloc(size_t m, size_t n);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);

/*char*/
char	*ft_strchr(register const char *str, int c);
char	*ft_strrchr(const char *str, int c);
char	*ft_strnstr(const char *s1, const char *s2, size_t n);
char	*ft_strdup(const char *s1);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char    **ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

#endif
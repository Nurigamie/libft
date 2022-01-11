/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 12:07:44 by mbuchet           #+#    #+#             */
/*   Updated: 2022/01/11 11:53:10 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len(long n)
{
	size_t	l;
	int		signe;

	l = 0;
	signe = 0;
	if (n < 0)
	{
		l++;
		signe++;
		n = -n;
	}
	while (n >= 1)
	{
		l++;
		n /= 10;
	}
	return (l);
}

static char	*tabchar(char *str, long nb, int leng, int signe)
{
	if (nb != 0)
		str = malloc(sizeof(char) * (leng + 1));
	else
		return (str = ft_strdup("0"));
	if (!str)
		return (0);
	signe = 0;
	if (nb < 0)
	{
		signe ++;
		nb = -nb;
	}
	str[leng] = '\0';
	while (leng--)
	{
		str[leng] = (nb % 10) + '0';
		nb /= 10;
	}
	if (signe == 1)
		str[0] = '-';
	else
		str[0] = (nb % 10) + '0';
	return (str);
}

char	*ft_itoa(int n)
{
	int		leng;
	char	*str;
	long	i;
	int		signe;

// 	i = n;
// 	leng = len(i);
// 	str = 0;
// 	signe = 0;
// 	str = tabchar(str, i, leng, signe);
// 	if (n == INT_MIN)
// 		return(ft_strdup("-2147483648"));
// 	if (!str)
// 		return (0);
// 	return (str);
// }

// static int	lengt(long n)
// {
// 	int		i;
	
// 	i = 1;
// 	if (n < 0)
// 		n = n * -1;
// 	while (n >= 10)
// 	{
// 		n = n / 10;
// 		i++;
// 	}
// 	return (i);
// }

// static char	tabchar(char *str, long nb, int len)
// {
// 	int		i;

// 	str[len] = '\0';
// 	len = len - 1;
// 	if (nb < 0)
// 	{
// 		nb = nb * -1;
// 		i = 1;
// 		str[0] = '-';
// 	}
// 	else
// 		i = 0;
// 	while (len >= i)
// 	{
// 		str[len] = nb % 10 + '0';
// 		nb = nb / 10;
// 		len--;
// 	}
// 	return (str);
// }

// char	*ft_itoa(int n)
// {
// 	int		len;
// 	char	*str;
// 	long	i;

// 	len = lengt(len);
// 	if (len < 0)
// 		len = len + 1;
// 	str = (char *)malloc(sizeof(char) * len + 1);
// 	if (!str)
// 		return (NULL);
// 	str = tabchar(str, len, len);
// 	return (str);
// }

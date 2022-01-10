/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 12:07:44 by mbuchet           #+#    #+#             */
/*   Updated: 2022/01/10 17:45:50 by mbuchet          ###   ########.fr       */
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

	i = n;
	leng = len(i);
	str = 0;
	signe = 0;
	str = tabchar(str, i, leng, signe);
	if (n == INT_MIN)
		return(ft_strdup("-2147483648"));
	if (!str)
		return (0);
	return (str);
}

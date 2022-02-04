/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 16:41:24 by mbuchet           #+#    #+#             */
/*   Updated: 2022/02/04 12:28:23 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	overflow(unsigned int n, int s, char c)
{
	if (s == 1 && ((unsigned)INT_MAX - (c - '0')) / 10 < n)
		return (0);
	if (s == 0 && ((unsigned)INT_MIN - (c - '0')) / 10 < n)
		return (-1);
	return (1);
}

static	int	avoid(char c)
{
	int	avoid;

	avoid = 0;
	if (c != '\0' && (c == ' ' || c == '\t' || c == '\n'
			|| c == '\r' || c == '\v' || c == '\f'))
		avoid = 1;
	else
		avoid = 0;
	return (avoid);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		signe;
	long	res;

	i = 0;
	signe = 0;
	res = 0;
	while (avoid(str[i]) == 1)
		i++;
	if (str[i] != '\0' && str[i] == '-')
	{
		signe = 1;
		i++;
	}
	else if (str[i] == '+')
			i++;
	while ((str[i] != '\0') && (str[i] >= '0' && str[i] <= '9'))
	{
		if (overflow(res, signe, *str) == 0 || overflow(res, signe, *str) == -1)
			return (overflow(res, signe, *str));
		res = res * 10 + str[i++] - '0';
	}
	if (signe == 1)
		return (-res);
	return (res);
}

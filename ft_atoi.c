/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 16:41:24 by mbuchet           #+#    #+#             */
/*   Updated: 2022/01/11 11:09:18 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		signe;
	int		res;
	

	i = 0;
	signe = 0;
	res = 0;
	while (str[i] != '\0' && (str[i] == 32 || str[i] == '\t' || str[i] == '\n'
			|| str[i] == '\r' || str[i] == '\v' || str[i] == '\f'))
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
		res = res * 10 + str[i++] - '0';
	}
	if (signe == 1)
		return (-res);
	return (res);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 22:34:09 by mbuchet           #+#    #+#             */
/*   Updated: 2021/10/05 22:34:09 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	const unsigned char	*str3;
	size_t				i;

	i = 0;
	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	while (n > 0)
	{
		str3 = (str1[i] - str2[i]);
		if (str1[i] != str2[i])
		{
			if (str3 < 0)
			{
				return (-1);
			}
			if ((str1[i] - str2[i]) > 0)
				return (1);
		}
		i++;
		n--;
	}
	return (0);
}

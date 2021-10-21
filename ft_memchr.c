/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 20:15:32 by mbuchet           #+#    #+#             */
/*   Updated: 2021/10/05 20:15:32 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void ft_memchr(const *s, int c, size_t length)
{
	const char *str;
	size_t	g_i;

	str = (const char *)s;
	i = 0;
	while (length > i)
	{
		if (str[i] == c)
			return ((void *)( s + i));
		i++;
	}
	return (NULL);
}

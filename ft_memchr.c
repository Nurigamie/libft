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

#include "libft.h"

void ft_memchr(const void *s, int c, size_t length)
{
	unsigned char *str;

	str = (unsigned char *)s;
	while (length--)
	{
		if (*str == (unsigned char) c)
			return ((void *) str );
		str++;
	}
	return (NULL);
}

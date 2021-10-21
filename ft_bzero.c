/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 16:52:20 by mbuchet           #+#    #+#             */
/*   Updated: 2021/10/20 16:14:45 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void ft_bzero(void *s, size_t n)
{
	unsigned char		*str;
 	size_t i;
	i = 0;
	str =(unsigned char *)s;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
	s=str;
}

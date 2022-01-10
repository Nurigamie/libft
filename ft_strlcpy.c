/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 18:29:34 by mbuchet           #+#    #+#             */
/*   Updated: 2022/01/10 15:52:13 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;
		i = ft_strlen(src);

		if(!size)
			return (i);
		while(*src && size > 1)
		{
			*dst = *src ;
			dst++; 
			src++;
            size--;
		}
		*dst = '\0';
		return (i);
}
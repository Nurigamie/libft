/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 17:03:51 by mbuchet           #+#    #+#             */
/*   Updated: 2022/01/09 20:07:35 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*dstbis;
	char	*srcbis;

	dstbis = (char *)dst;
	srcbis = (char *)src;
	if (dst == src)
		return (dst);
	if (srcbis < dstbis)
	{
		while (n--)
		{
			*(dstbis + n) = *(srcbis + n);
		}
		return (dst);
	}
	while (n--)
	{
		*dstbis++ = *srcbis++;
	}
	return (dst);
}

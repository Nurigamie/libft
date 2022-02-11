/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 17:03:51 by mbuchet           #+#    #+#             */
/*   Updated: 2022/02/11 12:01:37 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*dstbis;
	unsigned char	*srcbis;

	dstbis = (unsigned char *)dst;
	srcbis = (unsigned char *)src;
	if (dst == src)
		return (dst);
	if (srcbis < dstbis)
	{
		while (n--)
			*(dstbis + n) = *(srcbis + n);
		return (dst);
	}
	while (n--)
	{
		*dstbis = *srcbis;
		dstbis++;
		srcbis++;
	}
	return (dst);
}

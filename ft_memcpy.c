/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 16:57:20 by mbuchet           #+#    #+#             */
/*   Updated: 2021/10/21 18:20:13 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(char *dst, const void *src, size_t n)
{
	char		*dstbis;
	const char	*srcbis;

	if ((dst == src) || n == 0)
		return (dst);
	if (!dst && !src)
		return (0);
	dstbis = (char *)dst;
	srcbis = (const char *)src;
	while (n--)
		dstbis[n] = srcbis[n];
	return (dst);
}

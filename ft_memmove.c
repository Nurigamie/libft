/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 17:03:51 by mbuchet           #+#    #+#             */
/*   Updated: 2021/10/19 11:47:36 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *memmove(void *dst, const void *src, size_t n)
{
    char *dstbis;
    char *srcbis;

    dstbis =(char *)dst;
    srcbis = (char *)src;
    if(dst == src)
        return (dst);
    if(srcbis < dstbis)
    {
        while(n--)
            *(dstbis + n) = *(srcbis + n);  
            return(dst);
    }         
    while (n--)
        *dstbis++ = *srcbis++; 
    return(dst);
}
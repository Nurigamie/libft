/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 17:03:51 by mbuchet           #+#    #+#             */
/*   Updated: 2021/10/04 15:38:38 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *memmove(void *dest, const void *src, size_t n)
{
    char *destbis = dest;
    const char *srcbis = src;

    if(destbis < srcbis)
        while(n--)
            *destbis++ = *srcbis++;
    else
    {
        char *lasts = s + (n - 1);
        char *lastd = d + (n - 1);
        while(n--)
            *lastd-- = *lasts--;  
    }         
    return(dest);
}
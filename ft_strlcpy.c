/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 18:29:34 by mbuchet           #+#    #+#             */
/*   Updated: 2021/10/21 18:44:18 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i;
    i = ft_strlen(src)

    if(!size)
        return (i);
    while(*src && size--)
    {
        *dst = *src ;
        dst++; 
        src++;
    }
    *dst = '\0';
    return (size);
}
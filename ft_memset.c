/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 16:16:59 by mbuchet           #+#    #+#             */
/*   Updated: 2021/10/21 12:34:22 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *ft_memset(void *str, int c, size_t n)
{
    unsigned char *strbis;
    size_t  i;

    strbis = (unsigned char*)str;
    i = 0;
    while(i < n)
    {
        strbis[i] = c;
        i++;
    }
    return (str = strbis);
}

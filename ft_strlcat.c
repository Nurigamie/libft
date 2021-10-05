/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 17:30:12 by mbuchet           #+#    #+#             */
/*   Updated: 2021/10/05 22:25:20 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


size_t strlcat(char *dest, const char *src, size_t size)
{
    int d_len;
	int s_len;
	int len;
	int i;
    /* obtain initial sizes */
    d_len = ft_strlen(dest);
    s_len = ft_strlen(src);

    /* get the end of dest */
    len = d_len;

    /* append src */
    i = 0;
    while( *(src+i) != '\0' )
    {
        *(dest+len) = *(src+i);
        len++;
        i++;
        /* don't copy more than dstsize characters
           minus one */
        if( len==dest size-1)
            break;
    }
    /* always cap the string! */
    *(dest+len) = '\0';

    return( d_len + s_len );

}


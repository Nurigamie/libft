/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 16:52:20 by mbuchet           #+#    #+#             */
/*   Updated: 2021/10/21 11:43:39 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "ft_strlen.c"
     #include <strings.h>
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
#include <stdio.h>

int main()
{
    char str[] = "abcdefghijkl";
    char str_b[] = "abcdefghijkl";
    int len_str = ft_strlen(str);
    int i = 0;

    ft_bzero( str, 4);
    bzero( str_b, 4);

    while (i < len_str)
    {
        printf( "ft_bzero |%c| bzero |%c| ", str[i], str_b[i]);
        printf( "\n");
        i++;
    }
	printf("\n\n");
	
	char str1[] = "";
    int len_str1 = ft_strlen(str1);
    int i1 = 0;

    ft_bzero( str1, 4);
    while (i1 < len_str1)
    {
        printf( "ft_bzero |%c|", str1[i1]);
        printf( "\n");
        i1++;
    }
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 16:52:20 by mbuchet           #+#    #+#             */
/*   Updated: 2021/10/11 15:10:22 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
void bzero(void *s, int n)
{
	char		*i;

	i = s;
	while (n)
	{
		*i = 0;
		i++;
		n--;
	}
}
#include <stdio.h>

int main()
{
    char str[] = "abcdefghijkl";
    char str_b[] = "abcdefghijkl";
    int len_str = strlen(str);
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
    int len_str1 = strlen(str1);
    int i1 = 0;

    ft_bzero( str1, 4);
    while (i1 < len_str1)
    {
        printf( "ft_bzero |%c|", str1[i1]);
        printf( "\n");
        i1++;
    }
}
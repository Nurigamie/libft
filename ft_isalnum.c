/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 15:33:07 by mbuchet           #+#    #+#             */
/*   Updated: 2021/10/11 15:48:40 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalnum( int arg )
{
    int i;

    i = 0;

    while(arg != '\0')
    {
       if(arg <= 48 && arg >= 57 || arg > = 65  && arg<= 90 || arg>= 97 && arg<= 122) 
       i++;
       else
       return(0);
    }
    return(1);
}
#include <stdio.h>
#include <ctype.h>

int main ()
{
    printf("54 	is 		%d\n", ft_isalnum(54));
    printf("	should be 	%d\n\n", isalnum(54));
    printf("-1 	is 		%d\n", ft_isalnum(-1));
    printf("	should be 	%d\n\n", isalnum(-1));
	printf("b 	is 		%d\n", ft_isalnum('b'));
    printf("	should be 	%d\n\n", isalnum('b'));
	printf("321 is 		%d\n", ft_isalnum(321));
    printf("	should be 	%d\n\n", isalnum(321));
	printf("@ 	is 		%d\n", ft_isalnum('@'));
    printf("	should be 	%d\n\n", isalnum('@'));
}
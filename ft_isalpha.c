/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 15:01:55 by mbuchet           #+#    #+#             */
/*   Updated: 2021/10/11 15:48:50 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(char *str)
{
    int i;

    i = 0;

    while(str[i] != '\0')
    { 
        if(str[i]>= 65  && str[i]<= 90 || str[i]>= 97 && str[i]<= 122)
        {
            i++;
        }
        else
            return(0);
    }
    return(1);
}
#include <stdio.h>
#include <ctype.h>

int main ()
{
    printf("54 		is 		%d\n", ft_isalpha(54));
    printf("		should be 	%d\n\n", isalpha(54));
    printf("B 		is 		%d\n", ft_isalpha('B'));
    printf("		should be 	%d\n\n", isalpha('B'));
	printf("b 		is 		%d\n", ft_isalpha('b'));
    printf("		should be 	%d\n\n", isalpha('b'));
	printf("321 	is 		%d\n", ft_isalpha(321));
    printf("		should be 	%d\n\n", isalpha(321));
	printf("@ 		is 		%d\n", ft_isalpha('@'));
    printf("		should be 	%d\n\n", isalpha('@'));
}

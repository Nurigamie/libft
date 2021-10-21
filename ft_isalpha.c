/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 15:01:55 by mbuchet           #+#    #+#             */
/*   Updated: 2021/10/20 12:12:47 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(int arg)
{
return((arg>= 65  && arg<= 90) || (arg>= 97 && arg<= 122));
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
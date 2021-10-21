/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 10:07:31 by mbuchet           #+#    #+#             */
/*   Updated: 2021/10/05 10:07:31 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_toupper(int c)
{

		if (c >= 97 && c <= 122)
			c = c - 32;
	return (c);
}
#include <stdio.h>
#include <ctype.h>

int main ()
{
    printf("54 is 		%d\n", ft_toupper(54));
    printf("should be 	%d\n\n", toupper(54));
    printf("_1 is 		%d\n", ft_toupper(-1));
    printf("should be 	%d\n\n", toupper(-1));
	printf("256 is 		%d\n", ft_toupper(256));
    printf("should be 	%d\n\n", toupper(256));
	printf("321 is 		%d\n", ft_toupper(321));
    printf("should be 	%d\n\n", toupper(321));
	printf("97 is 		%d\n", ft_toupper(97));
    printf("should be 	%d\n\n", toupper(97));
	printf("110 is 		%d\n", ft_toupper(110));
    printf("should be 	%d\n\n", toupper(110)); 
}
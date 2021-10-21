/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 15:33:07 by mbuchet           #+#    #+#             */
/*   Updated: 2021/10/20 12:10:03 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90)
			|| (c >= 97 && c <= 122)
			|| (c >= 48 && c <= 57))
		return (c);
	return (0);
}
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
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
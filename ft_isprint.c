/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 16:02:48 by mbuchet           #+#    #+#             */
/*   Updated: 2021/10/20 12:17:33 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isprint (int c)
{
return(c >= 32 && c <= 126);
}
#include <stdio.h>
#include <ctype.h>
int main ()
{
    printf("54 is 		%d\n", ft_isprint(54));
    printf("should be 	%d\n\n", isprint(54));
    printf("_1 is 		%d\n", ft_isprint(-1));
    printf("should be 	%d\n\n", isprint(-1));
	printf("' ' is 		%d\n", ft_isprint(' '));
    printf("should be 	%d\n\n", isprint(' '));
	printf("backslash 0 is 		%d\n", ft_isprint(0));
    printf("should be 	%d\n\n", isprint(0));
	printf("'\n' is 		%d\n", ft_isprint('\n'));
    printf("should be 	%d\n\n", isprint('\n'));
	printf("'#' is 		%d\n", ft_isprint('#'));
    printf("should be 	%d\n\n", isprint('#'));
}
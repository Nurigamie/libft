/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 15:18:52 by mbuchet           #+#    #+#             */
/*   Updated: 2021/10/20 12:16:01 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isdigit( int arg )
{
return(arg >= 48 && arg <= 57);
}
#include <stdio.h>
#include <ctype.h>
int main ()
{
    printf("54 is 		%d\n", ft_isdigit(54));
    printf("should be 	%d\n\n", isdigit(54));
    printf("-1 is 		%d\n", ft_isdigit(-1));
    printf("should be 	%d\n\n", isdigit(-1));
	printf("'R' is 		%d\n", ft_isdigit('R'));
    printf("should be 	%d\n\n", isdigit('R'));
	printf("'2' is 		%d\n", ft_isdigit('2'));
    printf("should be 	%d\n\n", isdigit('2'));
}
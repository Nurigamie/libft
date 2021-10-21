/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 20:15:32 by mbuchet           #+#    #+#             */
/*   Updated: 2021/10/05 20:15:32 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void ft_memchr(const *s, int c, size_t length)
{
  const char *str;
  size_t i;
  
str = (const char *)s;
i = 0;
while (i < lenght)
{
  if(str[i]==c)
    return((void *)( s + i));
  i++;
}
return(0);
}

#include <stdio.h>

int main()
{

	printf("ft %s ",ft_memchr("ordinateur", '@', 4));
    printf("sys %s ",memchr("ordinateur", '@', 4));

   	printf( "\n\n");

 	printf("ft %s ",ft_memchr("pierre qui roule", 'o', 4));
    printf("sys %s ",memchr("pierre qui roule", 'o', 4));
	printf( "\n\n");

	printf("ft %s ",ft_memchr("pierre qui roule", 'o', 45));
    printf("sys %s ",memchr("pierre qui roule", 'o', 45));
	printf( "\n\n");

	printf("ft %s ",ft_memchr("ordinateur", 117, 10));
    printf("sys %s ",memchr("ordinateur", 117, 10));
	printf( "\n\n");

	printf("ft %s ",ft_memchr("", 117, 10));
    printf("sys %s ",memchr("", 117, 10));
}
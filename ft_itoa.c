/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 12:07:44 by mbuchet           #+#    #+#             */
/*   Updated: 2021/10/21 11:58:28 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_strdup.c"
#include "ft_memcpy.c"
#include "ft_strlen.c"

static int		len(long n)
{
	size_t length;
	int signe;

	length = 0;
	signe = 0;
	if (n<0)
	{
		length++;
		signe++;
		n = -n; 
	}
	while (n >= 1)
	{
		length++;
		n/=10;
	}
	return(length);
}
static char *tabchar(char *str, long nb, int leng, int signe)
{
	if (nb != 0)
		str = malloc(sizeof(char) * (leng + 1));
	else
		return(str = ft_strdup("0"));
	if(!str)
		return(0);
	signe = 0;
	if(nb < 0)
	{
		signe ++;
		nb = -nb;
	}
	str[leng] = '\0';
	while(leng--)
	{
		str[leng] = (nb % 10) + '0';
		nb /= 10;
	}
	if(signe == 1)
		str[0] = '-';
	else
		str[0]= (nb % 10) + '0';
	return(str);
}
char *ft_itoa(int n)
{
	int		leng;
	char	*str;
	long	i;
	int		signe;

	i = n;
	leng = len(i);
	str = 0;
	signe = 0;
	if(!(str = tabchar(str, i, leng, signe)))
		return(0);
		return(str);
}
#include <stdio.h>
int main ()
{
    printf("is %s \n",ft_itoa(1234));
    printf("is %s \n",ft_itoa(455596));
    printf("is %s \n",ft_itoa(-2147483648));
    printf("is %s \n",ft_itoa(-12366));
    printf("is %s \n",ft_itoa(2147483647));
    printf("is %s \n",ft_itoa(0));
    printf("is %s \n",ft_itoa(-0));
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 11:22:38 by mbuchet           #+#    #+#             */
/*   Updated: 2022/01/09 20:09:50 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if ((str = (char *)malloc(sizeof(const char) * len)))
		str[ft_strlen(s)] = '\0';
	else
		return (NULL);
	while (start++)
	{
		*str = *s;
	}
	return (str);
}
#include <stdio.h>

#include <stdlib.h>

int main ()
{
	printf(" |%s| \n\n", ft_substr("A chaque jour suffit sa peine", 2, 5));
	printf(" |%s| \n\n", ft_substr("", 3, 4));
	printf(" |%s| \n\n", ft_substr("A chaque jour suffit sa peine", 10, 4));
	printf(" |%s| \n\n", ft_substr("A chaque jour suffit sa peine", 1, 10));
	printf(" |%s| \n\n", ft_substr("A chaque jour suffit sa peine", 18, 1));
}
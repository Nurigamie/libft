/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 11:38:26 by mbuchet           #+#    #+#             */
/*   Updated: 2021/10/21 16:24:42 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_strlen.c"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	str = ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1 );
	str = (char *)malloc(sizeof(const char) * str1);
	if (str)
		str[ft_strlen((char *)s1)] = '\0';
	return (NULL);
	while (s1[i])
	{
		str[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i])
	{
		str[j] = s2[i];
		i++;
		j++;
	}
	return (str);
}

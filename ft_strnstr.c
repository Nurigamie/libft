/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 22:35:39 by mbuchet           #+#    #+#             */
/*   Updated: 2021/10/05 22:35:39 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*s;

	i = 0;
	s = (char *)s1;
	len = ft_strlen(s2);
	while (s1[i] != '\0' || s1 == s2)
	{
		j = 0;
		while (s1[i + j] && s2[j]
			&& s[i + j] == s2[j] && (i + j) < n)
			j++;
		if (j == len)
			return (s + i);
		i++;
	}
	return (0);
}

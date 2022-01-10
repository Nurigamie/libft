/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 12:14:44 by mbuchet           #+#    #+#             */
/*   Updated: 2022/01/09 20:09:24 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	if (!s || (!s && !f))
		return (ft_strdup(""));
	else if (!f)
		return (ft_strdup(s));
	str = ft_strdup(s);
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	return (str);
}

# include <stdio.h>


char		mapi(unsigned int i, char c)
{
	i = 0;
	while (i == 0)
	{
		if (c >= 'a' && c <= 'z')
			return (c - 32);
		else if (c >= 'A' && c <= 'Z')
			return (c + 32);
		else
			return (c);
	}
	return (c);
}

int main ()
{
	
	printf(" |%s| ", ft_strmapi("qui dort dine", &mapi));
	printf(" |%s| ", ft_strmapi("", &mapi));
	printf(" |%s| ", ft_strmapi("QUI VOLE UNE POULE, DORMIRA BIEN", &mapi));
	printf(" |%s| ", ft_strmapi("	ce TEST est UN peu STUPIDE ??", &mapi));
}
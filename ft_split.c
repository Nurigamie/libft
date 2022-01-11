/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 13:19:34 by mbuchet           #+#    #+#             */
/*   Updated: 2022/01/11 11:12:24 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int nbword(char const *s, char c)
{
	size_t	nbw;
	int	i;

	nbw = 0;
	i = 0 ;
	while(s[i] != '\0')
	{
		while(s[i] == c)
			i++;
		if (i > 0 && s[i] && s[i - 1] == c)
			nbw++;
		if (s[i])
			i++;
	}
	if (nbw == 0 && s[i-1]==c)
		return(0);
	if (s[0] != c )
	nbw++;
	return(nbw);
}
static char **alloc(char **str, char const *s, char c )
{
	size_t count; // taille à alloué
	int i; //axe y
	int j; //axe x

	count = 0;
	i = 0;
	j = 0;
	while(s[i])
	{
		if (s[i] != c)
			count++;
		else if (i > 0 && s[i -1] !=c)
		{
			str[j] = malloc(sizeof(char) * (count +1));
			if (!str[j])
				return(0);
			count = 0;
			j++;
		}
		if ((s[i + 1] =='\0') && (s[i] != c))
			if(!(str[j] = malloc(sizeof(char) * (count + 1))))
				return (0); 
		i++;
	}
	return(str);
}
static char **tab(char **str, char const *s, char c)
{
	int i; //increase s
	int j; // increase axe y
	int k; //incease axe x

	i = 0;
	j = 0;
	k = 0 ;
	while(s[i])
	{
		if (s[i] != c)
			str[j][k++] = s[i];
		else if (i > 0 && s[i - 1] != c)
			if(i!=0)
			{
				str[j][k]='\0';
				k = 0;
				j++;
			}
		if (s[i + 1] == '\0' && s[i] != c)
			str[j][k]='\0';
		i++;
	}
	return(str);
}
char	**ft_split(char const *s, char c)
{
	char **str; //final tab
	int nbw; // number of words

	//if s is empty
	if(!s || !*s)
	{
		str = malloc(sizeof(char *) * 1 );
		if(!str)
		return (NULL);
		*str = (void *)0;
		return(str);
	}
	nbw = nbword(s, c);
	str = malloc(sizeof(char *) *( nbw + 1));
	//if the allocation failed
	if (!str)
		return(0);
	//if the allocation worked
	if(alloc(str, s, c) != 0)
		tab(str, s ,c);
	else
	{
		free(str);
		return(NULL);
	}
	str[nbw] = (void *)0;
	return(str);
}

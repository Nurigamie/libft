/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 13:19:34 by mbuchet           #+#    #+#             */
/*   Updated: 2022/01/11 17:27:35 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	nbword(char const *s, char c)
{
	size_t	nbw;
	int		i;

	nbw = 0;
	i = 0 ;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (i > 0 && s[i] && s[i - 1] == c)
			nbw++;
		if (s[i])
			i++;
	}
	if (nbw <= 0 && s[i - 1] == c)
		return (0);
	if (s[0] != c && nbw > 0)
	nbw++;
	return (nbw);
}

static	char	*mallocbis(char **str, int i, int count)
{
	str[i] = malloc(sizeof(char) * (count + 1));
	if (!str[i])
		return (0);
	return (str[i]);
}

static	char	**alloc(char **str, char const *s, char c )
{
	size_t	count;
	int		i;
	int		j;

	count = 0;
	i = 0;
	j = 0;
	while (s[i++])
	{
		if (s[i] != c)
			count++;
		else if (i > 0 && s[i -1] != c)
		{
			mallocbis(str, j, count);
			count = 0;
			j++;
		}
		if ((s[i + 1] == '\0') && (s[i] != c))
			mallocbis(str, j, count);
	}
	return (str);
}

static	char	**tab(char **str, char const *s, char c)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0 ;
	while (s[i])
	{
		if (s[i] != c)
			str[j][k++] = s[i];
		else if (i > 0 && s[i - 1] != c)
		{
			if (i != 0)
			{
				str[j][k] = '\0';
				k = 0;
				j++;
			}
		}
		if (s[i + 1] == '\0' && s[i] != c)
			str[j][k] = '\0';
		i++;
	}
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		nbw;

	if (!s || !*s)
	{
		str = malloc(sizeof(char *) * 1);
		if (!str)
			return (NULL);
		*str = (void *)0;
		return (str);
	}
	nbw = nbword(s, c);
	str = malloc(sizeof(char *) *(nbw + 1));
	if (!str)
		return (0);
	if (alloc(str, s, c) != 0)
		tab (str, s, c);
	else
	{
		free (str);
		return (NULL);
	}
	if (nbw > 0)
	str[nbw] = (void *)0;
	return (str);
}

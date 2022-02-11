/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 11:32:13 by mbuchet           #+#    #+#             */
/*   Updated: 2022/02/11 12:02:43 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nbwords(const char *str, char c)
{
	int	nbw;
	int	trigger;

	nbw = 0;
	trigger = 0;
	while (*str)
	{
		if (*str != c && trigger == 0)
		{
			trigger = 1;
			nbw++;
		}
		else if (*str == c)
			trigger = 0;
		str++;
	}
	return (nbw);
}

static char	*word_dup(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (start < finish)
	{
		word[i] = str[start];
		i++;
		start++;
	}	
	word[i] = '\0';
	return (word);
}

char	**free_allocfailed(char **str, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len + 1)
	{
		free(str[i]);
		i++;
	}
	return (NULL);
}

char	**splitbis(char const *s, char c, char **str)
{
	size_t	i;
	size_t	j;
	int		k;

	i = 0;
	j = 0;
	k = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && k < 0)
			k = i;
		else if ((s[i] == c || i == ft_strlen(s)) && k >= 0)
		{
			str[j] = word_dup(s, k, i);
			if (!str[j])
				return (free_allocfailed(str, j));
			k = -1;
			j++;
		}
		i++;
	}
	str[j] = 0;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;

	if (!s)
		return (NULL);
	str = malloc((nbwords(s, c) + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	str = splitbis(s, c, str);
	return (str);
}

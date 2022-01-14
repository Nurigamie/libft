/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 13:19:34 by mbuchet           #+#    #+#             */
/*   Updated: 2022/01/14 15:56:21 by mbuchet          ###   ########.fr       */
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
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		k;
	char	**str;

	str = malloc((nbwords(s, c) + 1) * sizeof(char *));
	if (!s || !str)
		return (NULL);
	i = 0;
	j = 0;
	k = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && k < 0)
			k = i;
		else if ((s[i] == c || i == ft_strlen(s)) && k >= 0)
		{
			str[j++] = word_dup(s, k, i);
			k = -1;
		}
		i++;
	}
	str[j] = 0;
	return (str);
}

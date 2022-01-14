/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 13:19:34 by mbuchet           #+#    #+#             */
/*   Updated: 2022/01/14 10:01:58 by mbuchet          ###   ########.fr       */
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
	if (s[0] != c)
	nbw++;
	return (nbw);
}

static	char	**alloc(char **str, char const *s, char c )
{
	size_t count;
	int i;
	int j;

	count = 0;
	i = 0;
	j = 0;
	while(s[i++])
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
			str[j] = malloc(sizeof(char) * (count + 1));
			if (!str)
				return (0);
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
			if (i != 0)
			{
				str[j][k] = '\0';
				k = 0;
				j++;
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
		tab(str, s, c);
	else
	{
		free(str);
		return (NULL);
	}
	if (nbw > 0)
	str[nbw] = (void *)0;
	return (str);
}

// #include "libft.h"

// static int	count_words(const char *str, char c)
// {
// 	int i;
// 	int trigger;

// 	i = 0;
// 	trigger = 0;
// 	while (*str)
// 	{
// 		if (*str != c && trigger == 0)
// 		{
// 			trigger = 1;
// 			i++;
// 		}
// 		else if (*str == c)
// 			trigger = 0;
// 		str++;
// 	}
// 	return (i);
// }

// static char	*word_dup(const char *str, int start, int finish)
// {
// 	char	*word;
// 	int		i;

// 	i = 0;
// 	word = malloc((finish - start + 1) * sizeof(char));
// 	while (start < finish)
// 		word[i++] = str[start++];
// 	word[i] = '\0';
// 	return (word);
// }

// char		**ft_split(char const *s, char c)
// {
// 	size_t	i;
// 	size_t	j;
// 	int		index;
// 	char	**split;

// 	if (!s || !(split = malloc((count_words(s, c) + 1) * sizeof(char *))))
// 		return (0);
// 	i = 0;
// 	j = 0;
// 	index = -1;
// 	while (i <= ft_strlen(s))
// 	{
// 		if (s[i] != c && index < 0)
// 			index = i;
// 		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
// 		{
// 			split[j++] = word_dup(s, index, i);
// 			index = -1;
// 		}
// 		i++;
// 	}
// 	split[j] = 0;
// 	return (split);
// }
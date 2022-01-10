/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 11:47:04 by mbuchet           #+#    #+#             */
/*   Updated: 2022/01/09 20:09:47 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, const char *set)
{
	while (*set)
		if (c == *set++)
			return (0);
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*str;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = 0;
	end = ft_strlen(s1);
	while (is_in_set(s1[start], set) == 0)
		start++;
	if (start == ft_strlen(s1))
	{
		str = ft_strdup("");
		if (!str)
			return (NULL);
		return (str);
	}
	while (is_in_set(s1[end - 1], set) == 0)
		end--;
	str = ft_substr(s1, start, end - start);
	return (str);
}
#include <stdio.h>
#include <string.h>

int main ()
{
	char * seta = "abcd";
	char * stra = "abcdradiateurabcd";
	printf(" %s \n\n", ft_strtrim(stra, seta));

	char * setb = "abcd";
	char * strb = "aaaaaaradiateurccccc";
	printf(" %s \n\n", ft_strtrim(strb, setb));

	char * setc = "abcd";
	char * strc = "radiateurabcd";
	printf(" %s \n\n", ft_strtrim(strc, setc));

	char * setd = "";
	char * strd = "radiateur";
	printf(" %s \n\n", ft_strtrim(strd, setd));

	char * sete = "abcd";
	char * stre = "";
	printf(" %s \n\n", ft_strtrim(stre, sete));

	char * setf = "*@#";
	char * strf = "#@je suis @ une phrase #.@@@@@";
	printf(" %s \n\n", ft_strtrim(strf, setf));
}
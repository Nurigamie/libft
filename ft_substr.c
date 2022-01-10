/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 11:22:38 by mbuchet           #+#    #+#             */
/*   Updated: 2022/01/10 18:37:10 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	leng;
	char	*str;

	leng = ft_strlen(s);
	if (leng <= start || leng == 0 ||len == 0)
		return((char *) ft_calloc(1, 1));
if(len > leng - start)
	len = leng - start;
str = (char*)malloc(sizeof(char ) * (len +1));
	if (!str)
		return(NULL);
	ft_strlcpy(str, s + start, len +1);
return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 10:14:49 by mbuchet           #+#    #+#             */
/*   Updated: 2021/10/05 10:14:49 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
			j = ((char *)&str[i]);
		i++;
	}
	if (str[i] == (char)c)
		j = ((char *)&str[i]);
	return (j);
}

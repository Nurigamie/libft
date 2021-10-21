/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 22:40:07 by mbuchet           #+#    #+#             */
/*   Updated: 2021/10/05 22:40:07 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t		i;

	i = ft_strlen(s1) + 1;
	str =malloc(sizeof(const char) * ft_strlen(s1) + 1)
	if (!str)
		return (0);
	str = ft_memcpy(rtn, s1, len);
	return (str);
}

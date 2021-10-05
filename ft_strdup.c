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
	int		i;

	i = 0;
	if ((str = (char *)malloc(sizeof(const char) * ft_strlen(s1) + 1)))
		str[ft_strlen(s1)] = '\0';
	else
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	return (str);
}
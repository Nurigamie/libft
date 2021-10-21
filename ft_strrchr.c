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

char *ft_strrchr (const char *str, int c)
{
	int		i;
	char	*j;

	i = 0;
	j = NULL;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
			j = ((char *)&str[i]);
		i++;
	}
	if (str[i] == (char)c)
		j = ((char *)&s[i]);
	return (j);
}
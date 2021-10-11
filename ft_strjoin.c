/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 11:38:26 by mbuchet           #+#    #+#             */
/*   Updated: 2021/10/11 12:05:22 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strjoin(char const *s1, char const *s2)
{
    char* str;
    int i;
    int j;

    if ((str = (char *)malloc(sizeof(const char) * ft_strlen(s1) + t_strlen(s2)+1)))
		str[ft_strlen(s1)] = '\0';
	else
		return (NULL);

    while(s1[i])
    {
       str[j] = s1[i];
		i++;
        j++;
    }
    i = 0;
    while(s2[i])
    {
       str[j] = s2[i];
		i++;
        j++;
    }
    return(str);
}
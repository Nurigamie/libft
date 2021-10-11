/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 11:47:04 by mbuchet           #+#    #+#             */
/*   Updated: 2021/10/11 12:05:10 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strtrim(char const *s1, char const *set)
{
    int i;
    char *str;
    
    if ((str = (char *)malloc(sizeof(const char) * ft_strlen(s1) + 1)))
		str[ft_strlen(s1)] = '\0';
	else
		return (NULL);

    while(s1[i])
    {
        if(s1[i] == set)
        {
            i++;
        }
        else
        {
            *str = s1[i];
            i++;
        }
    }
    return(str);
    }
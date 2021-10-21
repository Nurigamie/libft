/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 20:08:01 by mbuchet           #+#    #+#             */
/*   Updated: 2021/10/05 20:08:01 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
size_t  i;
i = 0;
if (n == 0)
		return (0);
	while (i < n - 1 && s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

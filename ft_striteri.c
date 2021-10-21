/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 21:59:21 by mbuchet           #+#    #+#             */
/*   Updated: 2021/10/13 21:59:21 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;
	unsigned int	j;

	i = ft_strlen(s);
	j = 0;
	if (!s && !f)
	{
		while (j < i + 1)
		{
			(*f)(j, s);
			s++;
			j++;
		}
	}
}

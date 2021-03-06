/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 22:41:41 by mbuchet           #+#    #+#             */
/*   Updated: 2021/10/05 22:41:41 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t m, size_t n)
{
	void	*str;

	str = (void *)malloc(m * n);
	if (!str)
		return (NULL);
	ft_bzero(str, m * n);
	return (str);
}

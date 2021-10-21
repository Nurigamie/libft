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

#include <stdlib.h>
#include "ft_bzero.c"
#include <stdio.h>

void *ft_calloc(size_t m, size_t n)
{
	void	*str;

	str = malloc(m * n);
	if (!str)
		return (NULL);
	ft_bzero(str, m);
	return (str);
}

int main ()
{
	printf(" |%s| %p\n",ft_calloc(12,10),calloc(12,10));
	printf(" |%s| %p\n",ft_calloc(20,10),calloc(20,10));
	printf(" |%s| %p\n",ft_calloc(12,8),calloc(12,8));
	printf(" |%s| %p\n",ft_calloc(0,0),calloc(0,0));
}
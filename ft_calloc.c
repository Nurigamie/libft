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


void *ft_calloc(size_t m, size_t n)
{
	void	*str;

	str = malloc(size * count);
	if (!str)
		return (NULL);
	ft_bzero(str, count);
	return (str);
}
#include <stdio.h>
#include <stdlib.h>

int main ()
{
	printf(" |%s| %p\n",ft_calloc(12,10),ft_calloc(12,10));
	printf(" |%s| %p\n",ft_calloc(20,10),ft_calloc(20,10));
	printf(" |%s| %p\n",ft_calloc(12,8),ft_calloc(12,8));
	printf(" |%s| %p\n",ft_calloc(0,0),ft_calloc(0,0));
}
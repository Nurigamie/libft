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
	void *p;
	size_t *z;
	if (n && m > (size_t)-1/n) {
		errno = ENOMEM;
		return 0;
	}
	n *= m;
	p = malloc(n);
	if (!p) return 0;
	if (((size_t *)p)[-1] & 7) {
		m = (n + sizeof *z - 1)/sizeof *z;
		for (z=p; m; m--, z++) if (*z) *z=0;
	}
	return p;
}
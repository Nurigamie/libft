/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 16:07:19 by mbuchet           #+#    #+#             */
/*   Updated: 2021/10/19 16:07:19 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
int main ()
{
	ft_putchar_fd('e', 1);
	ft_putchar_fd('i', 2);
	ft_putchar_fd('y', 0);
	ft_putchar_fd('v', 124);
}

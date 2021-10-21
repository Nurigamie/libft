/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 16:21:06 by mbuchet           #+#    #+#             */
/*   Updated: 2021/10/19 16:21:06 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s)
		write(fd, s++, 1);
	write(fd, "\n", 1);
}

int main ()
{
	ft_putendl_fd("yolo", 1);
	write(1,"\n",1);
	ft_putendl_fd("blabla", 2);
	write(1,"\n",1);
	ft_putendl_fd("ffff", 0);
	write(1,"\n",1);
	ft_putendl_fd("wakeuteu", 124);
}
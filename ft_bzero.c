/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 16:52:20 by mbuchet           #+#    #+#             */
/*   Updated: 2021/10/05 22:27:11 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void bzero(void *s, int n)
{
  ft_memset (s, '\0', n);
}
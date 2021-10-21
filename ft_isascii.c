/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 15:40:20 by mbuchet           #+#    #+#             */
/*   Updated: 2021/10/21 14:57:45 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int arg)
{
	return (arg >= 0 && arg <= 128 );
}

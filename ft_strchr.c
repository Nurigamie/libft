/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 10:12:32 by mbuchet           #+#    #+#             */
/*   Updated: 2021/10/05 10:12:32 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *strchr (register const char *str, int c)
{
while (*str++)
{
    if (*str == c)
      {
        return (*str);
      }
}
if (*str == c)
{
  return (*str);
}
  return (0);
}

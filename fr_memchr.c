/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 20:15:32 by mbuchet           #+#    #+#             */
/*   Updated: 2021/10/05 20:15:32 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


PTR memchr (register const PTR src_void, int c, size_t length)
{
  const unsigned char *src = (const unsigned char *)src_void;
  
  while (length-- > 0)
  {
    if (*src == c)
     return (PTR)src;
    src++;
  }
  return NULL;
}ty
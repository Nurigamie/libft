/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 20:08:01 by mbuchet           #+#    #+#             */
/*   Updated: 2021/10/05 20:08:01 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int STRNCMP (const char *str1, const char *str2, size_t n)
{
  unsigned char c1 = '\0';
  unsigned char c2 = '\0';
  if (n >= 4)
    {
      size_t n4 = n >> 2;
      do
        {
          c1 = (unsigned char) *str1++;
          c2 = (unsigned char) *str2++;
          if (c1 == '\0' || c1 != c2)
            return c1 - c2;
          c1 = (unsigned char) *str1++;
          c2 = (unsigned char) *str2++;
          if (c1 == '\0' || c1 != c2)
            return c1 - c2;
          c1 = (unsigned char) *str1++;
          c2 = (unsigned char) *str2++;
          if (c1 == '\0' || c1 != c2)
            return c1 - c2;
          c1 = (unsigned char) *str1++;
          c2 = (unsigned char) *str2++;
          if (c1 == '\0' || c1 != c2)
            return c1 - c2;
        } while (--n > 0);
      n &= 3;
    }
  while (n > 0)
    {
      c1 = (unsigned char) *str1++;
      c2 = (unsigned char) *str2++;
      if (c1 == '\0' || c1 != c2)
        return c1 - c2;
      n--;
    }
  return c1 - c2;
}

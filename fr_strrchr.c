/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 10:14:49 by mbuchet           #+#    #+#             */
/*   Updated: 2021/10/05 10:14:49 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *
STRRCHR (const char *str, int c)
{
  const char *found, *p;
  c = (unsigned char) c;
  /* Since strchr is fast, we use it rather than the obvious loop.  */
  if (c == '\0')
    return strchr (str, '\0');
  found = NULL;
  while ((p = strchr (s, c)) != NULL)
    {
      found = p;
      str = p + 1;
    }
  return (found);
}
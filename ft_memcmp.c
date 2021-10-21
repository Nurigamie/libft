/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 22:34:09 by mbuchet           #+#    #+#             */
/*   Updated: 2021/10/05 22:34:09 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
     #include <string.h>
int ft_memcmp (const void *s1, const void *s2, size_t n)
{
  const unsigned char *str1;
  const unsigned char *str2;
  size_t i;

  i=0;
  str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
  while (n > 0)
    {
      if (str1[i] != str2[i])
          if((str1[i] - str2[i]) < 0)
          {
            return(-1);
          }
          if((str1[i] - str2[i]) > 0)
            return(1);
      i++;
      n--;
    }
  return 0;
}
#include <stdio.h>

int main ()
{
    printf("ft : %d  sys : %d",ft_memcmp("tout ce qui brille n'est pas d'or", "tout ce qui brille n'est paz d'or", 45),memcmp("tout ce qui brille n'est pas d'or", "tout ce qui brille n'est paz d'or", 45));
    printf("\n");
    printf("ft : %d  sys : %d",ft_memcmp("tout ce qui brille n'est pas d,or", "tout ce qui brille n'est pas d,ore", 45),memcmp("tout ce qui brille n'est pas d,or", "tout ce qui brille n'est pas d,ore", 45));
    printf("\n");
    printf("ft : %d  sys : %d",ft_memcmp("la parole est d'argent", "la parole est plop", 8),memcmp("la parole est d'argent", "la parole est plop", 8));
    printf("\n");
	printf("ft : %d  sys : %d",ft_memcmp("yolo", "", 15),memcmp("yolo", "", 15));
    printf("\n");
	printf("ft : %d  sys : %d",ft_memcmp("", "jesuisunephrase", 15),memcmp("", "jesuisunephrase", 15));
    printf("\n");
	printf("\n");
	printf("ft : %d  sys : %d",ft_memcmp("jesuisunephrase", "", 15),memcmp("jesuisunephrase", "", 15));
    printf("\n");
	printf("ft : %d  sys : %d",ft_memcmp("jesuisunephrase", "jesuisunephrase", 0),memcmp("jesuisunephrase", "jesuisunephrase", 0));
    printf("\n");

}
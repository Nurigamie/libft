/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 16:57:20 by mbuchet           #+#    #+#             */
/*   Updated: 2021/10/01 17:04:26 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_memcpy(char *dest, char *src, int n)
{
int i;

i = 0;
while(src[i] != n){
    dest[i] = src[i];
    i++;
}
  dest[i] = '\0';
 return(dest);
}
int main () {
   const char src[50] = "http://www.tutorialspoint.com";
   char dest[50];
   strcpy(dest,"Heloooo!!");
   printf("Before memcpy dest = %s\n", dest);
   memcpy(dest, src, strlen(src)+1);
   printf("After memcpy dest = %s\n", dest);
   
   return(0);
}
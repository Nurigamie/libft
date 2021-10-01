/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 16:16:59 by mbuchet           #+#    #+#             */
/*   Updated: 2021/10/01 16:53:52 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *memset(void *str, int c, int n)
{

        while(*str != n )
        {
            *str = c ;
            *str++;
        }
    }

int main()
{
    char str[50] = "GeeksForGeeks is for programming geeks.";
    printf("\nBefore memset(): %s\n", str);
  
    // Fill 8 characters starting from str[13] with '.'
    memset(str + 13, '.', 8*sizeof(char));
  
    printf("After memset():  %s", str);
    return 0;
}
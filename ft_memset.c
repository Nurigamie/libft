/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 16:16:59 by mbuchet           #+#    #+#             */
/*   Updated: 2021/10/04 15:31:46 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void *ft_memset(void *str, int c, size_t n)
{
    unsigned char *ptr = str;
        while(n-- > 0 )
            *ptr++ = c;
        return (str)
    }

int main()
{
    char str[50] = "GeeksForGeeks is for programming geeks.";
    printf("\nBefore memset(): %s\n", str);
  
    // Fill 8 characters starting from str[13] with '.'
    ft_memset(str + 13, '.', 8*sizeof(char));
  
    printf("After memset():  %s", str);
    return 0;
}
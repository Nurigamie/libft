/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 13:19:34 by mbuchet           #+#    #+#             */
/*   Updated: 2021/10/11 16:35:46 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *zStrtok(char *str, const char *delim) {
    static char *static_str=0;      /* var to store last address */
    int index=0, strlength=0;           /* integers for indexes */
    int found = 0;                  /* check if delim is found */

    /* delimiter cannot be str
    * if no more char left, return str as well
    */
    if (delim==0 || (str == 0 && static_str == 0))
        return 0;

    if (str == 0)
        str = static_str;

    /* get length of string */
    while(str[strlength])
        strlength++;

    /* find the first occurance of delim */
    while (index<strlength)
        if (str[index]==delim[0]) {
            found=1;
            break;
        }

    /* if delim is not contained in str, return str */
    if (!found) {
        static_str = 0;
        return str;
    }

    /* check for consecutive delimiters
    *if first char is delim, return delim
    */
    if (str[0]==delim[0]) {
        static_str = (str + 1);
        return (char *)delim;
    }

    /* terminate the string
    * this assignmetn requires char[], so str has to
    * be char[] rather than *char
    */
    str[index] = '\0';

    /* save the rest of the string */
    if ((str + index + 1)!=0)
        static_str = (str + index + 1);
    else
        static_str = 0;

        return str;
}
int main(void)
{
    char str[] = "A,B,,,C";
      printf("1 %s\n",zStrtok(str,","));
      printf("2 %s\n",zStrtok(str,","));
      printf("3 %s\n",zStrtok(str,","));
      printf("4 %s\n",zStrtok(str,","));
      printf("5 %s\n",zStrtok(str,","));
      printf("6 %s\n",zStrtok(str,","));
}
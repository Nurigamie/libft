/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 13:19:34 by mbuchet           #+#    #+#             */
/*   Updated: 2021/10/11 16:48:58 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char **ft_split(char const *s, char c)
{
    char *str=0; 
    int i=0;
    int length=0;           
    int found = 0; 
//si pas de char+ pas de c == null
    if (c==0 || (s == 0 && str == 0))
        return 0;

    if (s == 0)
        s = str;
//taille string
    while(s[length])
        length++;

//premier occurence string
    while (i<length)
        if (s[i]==c[0]) {
            found=1;
            break;
        }

//si c n'existe pqs juste retourner s
    if (!found) {
        str = 0;
        return s;
    }

//si c++
    if (s[0]==c[0]) {
        str = (s + 1);
        return (c);
    }

//fin string
    s[i] = '\0';

//ce qu'il reste de la string
    if ((s + i + 1)!=0)
        str = (s + i + 1);
    else
        str = 0;

        return s;
}

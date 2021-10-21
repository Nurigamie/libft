/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 13:19:34 by mbuchet           #+#    #+#             */
/*   Updated: 2021/10/21 16:53:58 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

static int  nbword(char const *s, char c)
{
    size_t nbr;
    int i;
    nbr = 0;
    i = 0 ;
    //s[i]!='\0' => s[i]
    while(s[i])
    {
        while(s[i] == c)
        i++;
        if (i > 0 && s[i] && s[i - 1] == c)
            nbr++;
        if (s[i])
            i++;
    }
    if (nbr == 0 && s[i-1]==c)
        return(0);
    if (s[0] != c )
    nbr++;

    return(nbr);    
}
static char **alloc(char **str, char const *s, char c )
{
    size_t count; // taille à alloué
    int i; //axe y
    int j; //axe x

    count = 0;
    i = 0;
    j = 0;
    while(s[i])
    {
        if (s[i] != c)  
            count++;
        else if (i > 0 && s[i -1] !=c)
        {
            str[j] = malloc(sizeof(char) * (count +1));
            if (!str[j])
                return(0);
            count = 0;
            j++;
        }
        if(s[i+1] =='\0' && s[i] != c)
            if(!(str[j] = malloc(sizeof(char) * (count +1))))
                return (0);
            i++;
    }
    return(str);
}
static char **tab(char **str, char const *s, char c)
{
    int i; //increase s
    int j; // increase axe y
    int k; //incease axe x

     i = 0;
     j = 0;
     k = 0 ;
    while(s[i])
    {
        if (s[i] != c)
            str[j][k++] = s[i];
        else if (i >0 && s[i - 1])
            if(i!=0)
            {
                str[j][k]='\0';
                k = 0;
                j++;
            }
        if (s[ i+1 ] == '\0')
            str[j][k]='\0';
        i++;
    }
    return(str);
}
char    **ft_split(char const *s, char c)
{
    char **str; //final tab
    int nbw; // number of words

    //if s is empty
    if(!s || !*s)
    {
        if(!(str = malloc(sizeof(char *)*1 )))
            return (NULL);
        *str = (void *)0;
        return(str);
    }
    nbw = nbword(s, c);
    str = malloc(sizeof(char *) *( nbw +1));
    //if the allocation failed
    if (!str)
        return(0);
    //if the allocation worked
    if(alloc(str, s, c) != 0)
        tab(str, s ,c);
    else
    {
        free(str);
        return(NULL);
    }
    str[nbw] = (void *)0;
    return(str);
}

static void			ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

static void			ft_print_tabstr(char **tabstr)
{
	int		i;

	i = 0;
	while (tabstr[i] != NULL)
	{
		ft_print_result(tabstr[i]);
		write(1, " // ", 4);
		free(tabstr[i]);
		i++;
	}
	free(tabstr);
}

int main ()
{
	char * strA = "il*ne*faut*pas*vendre*la*peau*de*l,ours*avant*de*l'avoir*tue";
	char cA = '*';
	char	**tabstrA = ft_split(strA, cA);
	ft_print_tabstr(tabstrA);

	char * strB = "*il*********ne*faut****pas***vendre*la*peau***de*l,ours*avant*de*l'avoir*tue************";
	char cB = '*';
	char	**tabstrB = ft_split(strB, cB);
	ft_print_tabstr(tabstrB);

	char * strC = "";
	char cC = '*';
	char	**tabstrC = ft_split(strC, cC);
	ft_print_tabstr(tabstrC);

	char * strD = "pierre qui roule n'amasse pas mousse";
	char cD = 'i';
	char	**tabstrD = ft_split(strD, cD);
	ft_print_tabstr(tabstrD);

	char * strE = "Diana Ross, née le 26 mars 1944 à Détroit (Michigan), est une chanteuse, compositrice et actrice américaine. ";
	char cE = ' ';
	char	**tabstrE = ft_split(strE, cE);
	ft_print_tabstr(tabstrE);

	char * strF = "il*ne*faut*pas*vendre*la*peau*de*l,ours*avant*de*l'avoir*tue";
	char cF = '@';
	char	**tabstrF = ft_split(strF, cF);
	ft_print_tabstr(tabstrF);
}
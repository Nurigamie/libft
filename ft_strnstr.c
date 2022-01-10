/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 22:35:39 by mbuchet           #+#    #+#             */
/*   Updated: 2021/10/05 22:35:39 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (s2 == NULL || ft_strlen(s2) == 0)
		return ((char *)s1);
	if (ft_strlen(s2) > n)
		return (NULL);
	while (i < n)
	{
		if (ft_strncmp((char *)&s1[i], s2, ft_strlen(s2)) == 0)
		{
			if (i + ft_strlen(s2) > n)
				return (NULL);
			return ((char *)&s1[i]);
		}
		i++;
	}
	return (NULL);
}

#include <stdio.h>


int main ()
{
	printf ("ft		%s\n", ft_strnstr("coucou je suis une phrase de test","e",10));
	printf ("sys	%s\n\n", strnstr("coucou je suis une phrase de test","e",10));

	printf ("ft		%s\n", ft_strnstr(" un matin, que je me promenais gaiement...", "promenais",60));
	printf ("sys	%s\n\n", strnstr(" un matin, que je me promenais gaiement...", "promenais",60));

	printf ("ft		%s\n", ft_strnstr(" un matin, que je me promenais gaiement...", "promenaISs",3));
	printf ("sys	%s\n\n", strnstr(" un matin, que je me promenais gaiement...", "promenaISs",3));

	printf ("ft		%s\n", ft_strnstr(" chapi chapo chabada", "chato",4));
	printf ("sys	%s\n\n", strnstr(" chapi chapo chabada", "chato",4));

	printf ("ft		%s\n", ft_strnstr(" un matin, que je me promenais gaiement...", "promenaISs",19));
	printf ("sys	%s\n\n", strnstr(" un matin, que je me promenais gaiement...", "promenaISs",19));

	printf ("ft		%s\n", ft_strnstr(" un matin, que je me promenais gaiement...", "\0",19));
	printf ("sys	%s\n\n", strnstr(" un matin, que je me promenais gaiement...", "\0",19));

	printf ("ft		%s\n", ft_strnstr("coucou je suis une phrase de test une phrase de test","une",10));
	printf ("sys	%s\n\n", strnstr("coucou je suis une phrase de test une phrase de test","une",10));
}

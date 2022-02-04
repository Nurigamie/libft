/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 13:15:33 by mbuchet           #+#    #+#             */
/*   Updated: 2022/01/13 13:15:33 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*i;
	t_list	*tmp;

	if (!f || !del)
		return (NULL);
	i = NULL;
	while (lst)
	{
		tmp = ft_lstnew((f(lst->content)));
		if (!tmp)
		{
			while (i)
			{
				tmp = i->next;
				ft_lstclear(&i, del);
				i = tmp;
			}
			lst = NULL;
			return (NULL);
		}
		ft_lstadd_back(&i, tmp);
		lst = lst->next;
	}
	return (i);
}

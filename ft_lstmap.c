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
	t_list	*j;

	if (!f || !del)
		return (NULL);
	i = NULL;
	while (lst)
	{
		j = ft_lstnew((f(lst->content)));
		if (!j)
		{
			ft_lstclear(&j, del);
			return (NULL);
		}
		ft_lstadd_back(&i, j);
		lst = lst->next;
	}
	return (i);
}
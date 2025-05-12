/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameskine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 22:23:55 by ameskine          #+#    #+#             */
/*   Updated: 2024/11/19 16:56:03 by ameskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*rjdi;
	t_list	*new;

	if (!lst || !f || !del)
		return (NULL);
	rjdi = NULL;
	while (lst)
	{
		new = ft_lstnew((*f)(lst->content));
		if (!new)
			return (ft_lstclear(&rjdi, del), NULL);
		ft_lstadd_back(&rjdi, new);
		lst = lst->next;
	}
	return (rjdi);
}

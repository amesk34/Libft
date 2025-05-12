/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameskine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 09:34:18 by ameskine          #+#    #+#             */
/*   Updated: 2024/11/19 16:38:46 by ameskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*pp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		pp = (*lst)->next;
		ft_lstdelone(*lst, del);
		(*lst) = pp;
	}
}

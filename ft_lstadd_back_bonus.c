/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameskine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 06:56:49 by ameskine          #+#    #+#             */
/*   Updated: 2024/11/16 23:50:25 by ameskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*pp;

	if (!lst)
		return ;
	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	pp = ft_lstlast(*lst);
	pp->next = new;
}
/*int main()
{
    t_list *head = NULL;
    t_list *new_node;

    new_node = ft_lstnew("dima meghrib");
    ft_lstadd_back(&head, new_node);

    //new_node = ft_lstnew("dima raja");
    //ft_lstadd_back(&head, new_node);

    //new_node = ft_lstnew("CUMP rab:x");
    //ft_lstadd_back(&head, new_node);

    t_list *temp = head;
    while (temp)
    {
        printf("%s\n", (char *)temp->content);
        temp = temp->next;
    }
    return 0;
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameskine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 06:13:50 by ameskine          #+#    #+#             */
/*   Updated: 2024/11/16 23:49:30 by ameskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*int main()
{
    int a = 42;
    int b = 36;
    int c = 58;

    t_list *head = ft_lstnew(&a);
    t_list *newbnode = ft_lstnew(&b);
    t_list *newcnode = ft_lstnew(&c);

    ft_lstadd_front(&head, newbnode);
    ft_lstadd_front(&head, newcnode);
    
    t_list *current = head;
    while (current) {
        printf("%d // ", *(int *)current->content);
        current = current->next;
    }
    printf("NULL");
    free(head);
}*/

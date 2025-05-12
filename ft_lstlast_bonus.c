/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameskine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 06:41:54 by ameskine          #+#    #+#             */
/*   Updated: 2024/11/16 06:55:22 by ameskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/*int main()
{
    t_list *lst;
    t_list *n1;
    t_list *n2;
    t_list *n3;
    t_list *last;

    n1 = ft_lstnew("Hello");
    n2 = ft_lstnew("World");
    n3 = ft_lstnew("1337");

    lst = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = NULL;

    last = ft_lstlast(lst);

    if (last)
        printf("%s", (char *)last->content);
    return 0;
}*/

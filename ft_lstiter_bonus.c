/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameskine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 22:23:05 by ameskine          #+#    #+#             */
/*   Updated: 2024/11/17 16:15:59 by ameskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
/*void print_content(void *content)
{
	printf("%s\n", (char *)content);
}

int main()
{
	t_list *n1 = ft_lstnew("kedfbk");
	t_list *n2 = ft_lstnew("kfdbnrwelnrn");

	n1 -> next=n2;
	n2 -> next =NULL;
	ft_lstiter(n1,print_content);
	free(n1);
	free(n2);
}*/

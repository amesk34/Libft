/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameskine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 06:32:30 by ameskine          #+#    #+#             */
/*   Updated: 2024/11/16 23:46:39 by ameskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

/*int main(void)
{
    t_list *lst;
    t_list *n1;
    t_list *n2;
    t_list *n3;

    n1 = ft_lstnew("amine");
    n2 = ft_lstnew("1337");
    n3 = ft_lstnew("kl");

    lst = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = NULL;

    printf("%d\n", ft_lstsize(lst));
}*/

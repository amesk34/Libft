/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameskine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 08:43:16 by ameskine          #+#    #+#             */
/*   Updated: 2024/11/16 09:32:20 by ameskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	if (lst->content != NULL)
		(*del)(lst->content);
	free(lst);
}
/*void del(void *content)
{
    free(content);
}
*/
/*int main()
{
	t_list *node = malloc(sizeof(t_list));
	if(!node)
		return (0);
	node ->content = ft_strdup("hello");
	node-> next = NULL;
	printf("%s\n", (char *)node->content);
	ft_lstdelone(node, del);
	printf("Node deleted.\n");
	return (0);
}*/

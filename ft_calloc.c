/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameskine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 20:54:14 by ameskine          #+#    #+#             */
/*   Updated: 2024/11/17 10:39:29 by ameskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	pp;

	pp = size * nmemb;
	if (size != 0 && pp / size != nmemb)
		return (NULL);
	ptr = malloc(pp);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, pp);
	return (ptr);
}

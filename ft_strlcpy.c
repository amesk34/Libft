/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameskine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 21:58:06 by ameskine          #+#    #+#             */
/*   Updated: 2024/11/18 14:18:31 by ameskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = ft_strlen(src);
	if (dst == src && size)
		return (0);
	if (size)
	{
		while (j < size - 1 && src[j])
		{
			dst[j] = src[j];
			j++;
		}
		dst[j] = '\0';
	}
	return (i);
}
/*#include <stdio.h>
int main()
{
	char d[]="aminemeskine ";
	char t[50];
	printf("%ld\n",ft_strlcpy(t,d,8));
}*/

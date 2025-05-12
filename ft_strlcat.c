/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameskine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:50:33 by ameskine          #+#    #+#             */
/*   Updated: 2024/11/18 17:35:33 by ameskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	ldst;
	size_t	lsrc;
	size_t	i;

	if (size == 0)
		return (ft_strlen(src));
	ldst = ft_strlen(dst);
	lsrc = ft_strlen(src);
	if (ldst >= size)
		return (size + lsrc);
	i = 0;
	while (src[i] && ldst + i < size -1)
	{
		dst[ldst + i] = src[i];
		i++;
	}
	dst[ldst + i] = '\0';
	return (ldst + lsrc);
}
/*int main()
{
	char *d="jkjk";
	char s[20]=",ndl";
	//char s[]="";
	int i=ft_strlcat(s,d,1);
	printf("====%s\n",s);
	printf("%d",i);
}*/

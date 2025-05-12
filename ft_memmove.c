/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameskine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 08:32:29 by ameskine          #+#    #+#             */
/*   Updated: 2024/11/19 15:43:55 by ameskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*t;
	unsigned char	*y;

	if (!dest && !src)
		return (NULL);
	t = (unsigned char *) dest;
	y = (unsigned char *) src;
	i = 0;
	if (y > t)
		return (ft_memcpy(t, y, n));
	while (i < n)
	{
		t[n - i - 1] = y[n - i - 1];
		i++;
	}
	return (dest);
}
/*#include <stdio.h>
#include <string.h>
int main()
{
	char s[]="123456789";
	char *d = ft_memmove(s+2,s,3);
//	char *h =memmove(s+2,s,3);
	printf("%s\n",d);
}*/

/*int main()
{
	//char *b = NULL;
	//char *c = NULL;

	printf("%s\n " , (char *)memmove(NULL, NULL, 8));
	printf("%s ", (char *)ft_memmove(NULL,NULL , 8));
}*/

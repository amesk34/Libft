/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameskine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 14:58:30 by ameskine          #+#    #+#             */
/*   Updated: 2024/11/19 12:09:38 by ameskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	--i;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	if ((char)c == '\0')
		return ((char *)(s + ft_strlen(s)));
	return (NULL);
}
/*#include <stdio.h>
#include <string.h>
int main()
{
	char d[] = "teste";
	int t = '\0'; 
	char *c = ft_strrchr(d,t);
	char *g = strrchr(d,t);
	printf("%p ======= %p", c, g);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameskine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:09:20 by ameskine          #+#    #+#             */
/*   Updated: 2024/11/16 23:25:31 by ameskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = ft_strlen(little);
	if (!(*little))
		return ((char *)big);
	if ((!(*big)) || (len == 0) || (i > len))
		return (NULL);
	while (big[j] && j <= len - i)
	{
		if (ft_strncmp(big + j, little, i) == 0)
			return ((char *)(big + j));
		j++;
	}
	return (NULL);
}
/*int main()
{
	char *d="helloworld";
	char *f="world";
	char *res = ft_strnstr(d,f,9);
	printf("%s",res);
	//printf("%d", ft_strncmp("lloworld", "llo", 3));
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameskine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 17:43:50 by ameskine          #+#    #+#             */
/*   Updated: 2024/11/19 09:40:44 by ameskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (p[i] == (unsigned char)c)
			return (p + i);
		i++;
	}
	return (NULL);
}

/*int main()
{
	char *s="kdjfHlkd";
	int i = 'H';
	char *c=ft_memchr(s,i,8);
	char *f=memchr(s,i,8);
	printf("%s === %s", c, f);
}
*/

/*int main()
{
    int i = 1337;
    char *c = ft_memchr(&i, 5, sizeof(int));
    printf("%d", *c);
    return 0;
}*/

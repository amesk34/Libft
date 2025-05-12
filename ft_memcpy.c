/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameskine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:50:49 by ameskine          #+#    #+#             */
/*   Updated: 2024/11/19 14:40:37 by ameskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
/*#include <stdio.h>
#include <string.h>
int main()
{
    	char str[] = "Hello, World!";
	ft_memcpy(str + 3, str, 10);
	printf("%s\n", str);
}*/

/*int main()
{
    void *result1 = ft_memcpy(NULL, NULL, 1);
    void *result2 = memcpy(NULL, NULL, 1);

    printf("this is mine with NULL: %s\n", result1);
    printf("this is the original with NULL: %s\n", result2);

    return 0;
}*/

/*int main()
{
    int s[] = {2, 2, 3, 4};
    int p = 0;
    ft_memcpy((unsigned char*)&p, (unsigned char*)s, 1);
    ft_memcpy((unsigned char*)&p + 1, (unsigned char*)s + (3 * sizeof(int)), 1);
    printf("%p\n", (void*)s);
    printf("%p\n", (void*)(s + 1));
    printf("%p\n", (void*)(s + 2));
    printf("%p\n", (void*)(s + 3));
    printf("%d\n", p);

    return 0;
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameskine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 20:44:41 by ameskine          #+#    #+#             */
/*   Updated: 2024/11/16 23:17:28 by ameskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n--)
	{
		*p = (unsigned char) c;
		p++;
	}
	return (s);
}

/*int main()
{
	//char i = 1;
	//ft_memset(&i,235,1);
	//printf("%d",i);
	//int s[]={0};
	//ft_memset(s,5,2);
	//ft_memset(s,57,1);
	//printf("%d",s[0]);
	//char s[5];
	//ft_memset(s,101,5);
	//ft_memset(s,110,4);
	//ft_memset(s,105,3);
	//ft_memset(s,109,2);
	//ft_memset(s,97,1);
	//printf("%s",s);
	void *r = 5;
	printf("%p",void *r);
}*/

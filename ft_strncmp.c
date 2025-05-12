/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameskine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:26:49 by ameskine          #+#    #+#             */
/*   Updated: 2024/11/19 11:18:02 by ameskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*ss;

	if (!s1 && !s2)
		return (0);
	s = (unsigned char *)s1;
	ss = (unsigned char *)s2;
	i = 0;
	while (s[i] != '\0' && ss[i] != '\0' && s[i] == ss[i] && i < n)
		i++;
	if (i == n)
		return (0);
	return (s[i] - ss[i]);
}
/*int main()
{
	char s[]="";
	char j[5]="jaac";
	int f = ft_strncmp(s,j,5);
	//printf("%p\n %p\n",s,j);
	printf("%d",f);
}*/

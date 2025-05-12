/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameskine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 20:57:15 by ameskine          #+#    #+#             */
/*   Updated: 2024/11/16 23:38:04 by ameskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	num_c(int num)
{
	long	nb;
	size_t	count;

	if (num == 0)
		return (1);
	count = 0;
	nb = num;
	if (nb < 0)
	{
		nb = -nb;
		count++;
	}
	while (nb > 0)
	{
		nb /= 10;
		count++;
	}
	return (count);
}

static void	fill_arr(char *s, size_t pos, int n)
{
	long	nb;

	nb = n;
	if (nb < 0)
		nb = -nb;
	if (nb > 9)
		fill_arr(s, pos - 1, nb / 10);
	s[pos] = (nb % 10) + 48;
}

char	*ft_itoa(int n)
{
	size_t	i;
	char	*ito;

	i = num_c(n);
	ito = (char *)malloc((i + 1) * sizeof(char));
	if (!ito)
		return (NULL);
	ito[i--] = '\0';
	if (n < 0)
		ito[0] = '-';
	fill_arr(ito, i, n);
	return (ito);
}

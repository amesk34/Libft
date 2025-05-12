/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameskine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 23:03:08 by ameskine          #+#    #+#             */
/*   Updated: 2024/11/18 23:03:48 by ameskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_tk3ki3(int sign)
{
	if (sign == 1)
		return (-1);
	return (0);
}

static t_bool	check_len(const char *s)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	while (s[i] == '0')
		i++;
	while (ft_isdigit(s[i + k]))
		k++;
	return (k > ft_strlen("9223372036854775807")
		|| (k == ft_strlen("9223372036854775807")
			&& ft_strncmp(&s[i], "9223372036854775807", k) > 0));
}

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	res;
	int	i;

	res = 0;
	sign = 1;
	i = 0;
	while ((*nptr >= 9 && *nptr <= 13) || *nptr == 32)
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign *= -1;
		nptr++;
	}
	if (check_len(&nptr[i]))
		return (ft_tk3ki3(sign));
	while (*nptr >= '0' && *nptr <= '9')
	{
		res = (res * 10) + (*nptr - '0');
		nptr++;
	}
	return (res * sign);
}
/*#include <stdio.h>
int main ()
{
    int k  = ft_atoi("-21474836488888899999");
    int b = atoi("-21474836488888899999");
    printf("ft :%d\n %d",k,b);

}*/

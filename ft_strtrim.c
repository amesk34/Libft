/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameskine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 20:56:09 by ameskine          #+#    #+#             */
/*   Updated: 2024/11/16 23:34:17 by ameskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_bool	ft_isset(char c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (TRUE);
		set++;
	}
	return (FALSE);
}

static	size_t	w_len(char const *s, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	count;

	i = 0;
	j = ft_strlen(s) - 1;
	count = 0;
	while (ft_isset(s[i], set))
		i++;
	while (ft_isset(s[j], set))
		j--;
	while (s[i] && i <= j)
	{
		i++;
		count++;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	i;
	size_t	j;
	size_t	k;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = ft_strlen(s1) - 1;
	trim = (char *)malloc((w_len(s1, set) + 1) * sizeof(char));
	if (!trim)
		return (NULL);
	while (ft_isset(s1[i], set))
		i++;
	while (ft_isset(s1[j], set))
		j--;
	k = 0;
	while (s1[i] && i <= j)
		trim[k++] = s1[i++];
	trim[k] = '\0';
	return (trim);
}

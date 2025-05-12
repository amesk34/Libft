/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameskine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 20:56:44 by ameskine          #+#    #+#             */
/*   Updated: 2024/11/18 12:07:04 by ameskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_bool	ft_issep(char s, char c)
{
	return (s == c || s == '\0');
}

static size_t	word_c(const char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (!ft_issep(s[i], c) && ft_issep(s[i + 1], c))
			count++;
		i++;
	}
	return (count);
}

static void	freemem(char **split, size_t i)
{
	while (i--)
	{
		free(split[i]);
	}
	free(split);
}

static	t_bool	ft_fill(char **split, const char *s, char sep)
{
	size_t	i;
	size_t	pos;
	size_t	count;

	i = 0;
	pos = 0;
	count = 0;
	while (s[i])
	{
		if (!ft_issep(s[i], sep) && ft_issep(s[i + 1], sep))
		{
			split[pos] = ft_substr(s, i - count, count + 1);
			if (!split[pos++])
				return (freemem(split, pos - 1), FALSE);
			count = -1;
		}
		if (!ft_issep(s[i], sep))
			count++;
		i++;
	}
	split[pos] = NULL;
	return (TRUE);
}

char	**ft_split(char const *s, char c)
{
	char	**split;

	if (!s)
		return (NULL);
	split = (char **)malloc((word_c(s, c) + 1) * sizeof(char *));
	if (!split || !ft_fill(split, s, c))
		return (NULL);
	return (split);
}
/*#include <stdio.h>
int main()
{
	int i = 0;
	char **c = ft_split("hjdh wehlfkb lweb wreohgb wprghp",' ');
	while(c[i])
	{
		printf("%s",c[i]);
		i++;
	}
}*/

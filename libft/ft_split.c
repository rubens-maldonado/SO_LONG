/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaldona <rmaldona@student42.rio>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 18:09:30 by rmaldona          #+#    #+#             */
/*   Updated: 2022/06/16 17:27:11 by rmaldona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(char const *s, char c)
{
	int	i;
	int	start;
	int	ct;

	i = 0;
	ct = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		start = i;
		while (s[i] != c && s[i])
			i++;
		if (start != i)
			ct++;
	}
	return (ct);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		start;
	char	**mal;
	int		word;

	if (!s)
		return (NULL);
	i = 0;
	word = 0;
	mal = ft_calloc(count(s, c) + 1, sizeof(char *));
	if (!mal)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		start = i;
		while (s[i] != c && s[i])
			i++;
		if (start != i)
			mal[word++] = ft_substr(s, start, i - start);
	}
	return (mal);
}

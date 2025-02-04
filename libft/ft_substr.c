/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaldona <rmaldona@student42.rio>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 13:51:01 by rmaldona          #+#    #+#             */
/*   Updated: 2022/06/15 20:14:18 by rmaldona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*a;

	i = 0;
	j = 0;
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len >= ft_strlen(s))
		len = ft_strlen(s);
	a = (char *)malloc(len + 1);
	if (!a || !s)
		return (NULL);
	while (s[i] != '\0')
	{
		if (i >= start && j <= len)
		{
			a[j] = s[start];
			start++;
			j++;
		}
		i++;
	}
	a[len] = '\0';
	return (a);
}

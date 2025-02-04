/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaldona <rmaldona@student42.rio>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 11:00:35 by rmaldona          #+#    #+#             */
/*   Updated: 2022/06/16 17:30:03 by rmaldona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	s1len;
	size_t	s2len;
	char	*mal;
	int		i;
	int		j;

	i = 0;
	j = 0;
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	mal = ((char *)malloc(sizeof(char) * (s1len) + (s2len) + 1));
	if (!mal || !s1 || !s2)
		return (NULL);
	while (s1[i] != '\0')
	{
		mal[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		mal[i + j] = s2[j];
		j++;
	}
	mal[j + i] = '\0';
	return (mal);
}

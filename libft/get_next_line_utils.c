/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaldona <rmaldona@student42.rio>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 20:12:18 by rmaldona          #+#    #+#             */
/*   Updated: 2022/07/30 12:59:57 by rmaldona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

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

size_t	ft_strlen(const char *s)
{
	size_t	count;

	count = 0;
	while (*s != '\0')
	{
		s++;
		count++;
	}
	return (count);
}

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (*s)
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if (!c)
		return ((char *)s);
	return (0);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	ptr = malloc(count * size);
	if (ptr)
		ft_bzero (ptr, count * size);
	return (ptr);
}

void	ft_bzero(void *s, size_t n)
{
	char			*a;
	unsigned long	i;

	a = s;
	i = 0;
	while (i < n)
	{
		a[i] = 0;
		i++;
	}
}

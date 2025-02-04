/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaldona <rmaldona@student42.rio>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 16:10:37 by rmaldona          #+#    #+#             */
/*   Updated: 2022/06/16 13:12:33 by rmaldona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		slen;
	int		i;
	char	*mal;

	i = 0;
	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	mal = malloc(slen + 1);
	if (!mal)
		return (NULL);
	while (s[i])
	{
		mal[i] = f(i, s[i]);
		i++;
	}
	mal[i] = '\0';
	return (mal);
}

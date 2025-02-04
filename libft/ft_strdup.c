/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaldona <rmaldona@student42.rio>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 10:27:01 by rmaldona          #+#    #+#             */
/*   Updated: 2022/06/02 19:18:00 by rmaldona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*str;

	i = ft_strlen(s1) + 1;
	str = (char *)malloc(sizeof(char) * i);
	if (str == NULL)
		return (0);
	str[i - 1] = '\0';
	while (--i > 0)
		str[i - 1] = s1[i - 1];
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaldona <rmaldona@student42.rio>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 17:34:02 by rmaldona          #+#    #+#             */
/*   Updated: 2022/06/14 16:06:10 by rmaldona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int			i;
	const char	*a;

	i = 0;
	a = (char *) s;
	while (n-- > 0)
	{
		if (a[i] == c)
			return (&((char *)a)[i]);
		else if (a[i] == (unsigned char)c)
			return (&((char *)a)[i]);
		i++;
	}
	return (0);
}

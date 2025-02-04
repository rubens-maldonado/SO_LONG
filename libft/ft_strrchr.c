/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaldona <rmaldona@student42.rio>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 12:08:41 by rmaldona          #+#    #+#             */
/*   Updated: 2022/06/08 15:09:34 by rmaldona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*a;

	a = (char *) s;
	i = (int)ft_strlen(s);
	while (i >= 0)
	{
		if (a[i] == (char)c)
			return (&a[i]);
		i--;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaldona <rmaldona@student42.rio>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 12:07:17 by rmaldona          #+#    #+#             */
/*   Updated: 2022/06/02 19:26:30 by rmaldona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char			*a;
	unsigned long	i;

	a = b;
	i = 0;
	if (len == 0)
		return (a);
	while (i <= len - 1)
	{
		a[i] = c;
		i++;
	}
	return (a);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaldona <rmaldona@student42.rio>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 22:33:39 by rmaldona          #+#    #+#             */
/*   Updated: 2022/06/16 13:11:47 by rmaldona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_e(int n)
{
	int	x;
	int	count;

	x = n;
	count = 0;
	if (n == 0)
		count = 1;
	if (n < 0)
	{
		n = -n;
		count++;
	}
	while (x != 0)
	{
		x = x / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char			*mal;
	int				count;
	unsigned int	auxn;

	auxn = n;
	count = count_e(n);
	mal = (char *)malloc(count + 1 * sizeof(char));
	if (!mal)
		return (NULL);
	if (n < 0)
	{
		n = -n;
		mal[0] = '-';
	}
	mal[count--] = '\0';
	if (!n)
		mal[0] = '0';
	else
		auxn = n;
	while (auxn > 0)
	{
		mal[count--] = auxn % 10 + 48;
		auxn = auxn / 10;
	}
	return (mal);
}

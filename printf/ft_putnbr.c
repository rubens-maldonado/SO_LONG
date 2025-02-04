/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaldona <rmaldona@student42.rio>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 00:16:43 by rmaldona          #+#    #+#             */
/*   Updated: 2022/07/14 04:35:58 by rmaldona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		i += ft_putchar('-');
		if (n == -2147483648)
		{
			i += ft_putchar('2');
			n = ft_putnbr(147483648);
			return (11);
		}
		n = -n;
	}
	if (n > 9)
	{
		i += ft_putnbr(n / 10);
	}
	i += ft_putchar(n % 10 + 48);
	return (i);
}

int	ft_putnosign(unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n < 0)
		n = -n;
	if (n > 9)
	{
		i += ft_putnosign(n / 10);
	}
	i += ft_putchar(n % 10 + 48);
	return (i);
}

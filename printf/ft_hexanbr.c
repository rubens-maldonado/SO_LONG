/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexanbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaldona <rmaldona@student42.rio>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 21:35:46 by rmaldona          #+#    #+#             */
/*   Updated: 2022/07/14 04:28:06 by rmaldona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexanbr(unsigned long n, char str)
{
	long int	i;
	int			conv;

	i = 0;
	conv = 0;
	if (str == 'x')
		conv = 32;
	if (n >= 16)
	{
		i += ft_hexanbr(n / 16, str);
	}
	if (n % 16 <= 9)
		i += ft_putchar(n % 16 + 48);
	else
		i += ft_putchar((n % 16) + (55 + conv));
	return (i);
}

int	ft_hexanbrn(unsigned long n)
{
	int			lenght;

	lenght = 0;
	lenght += ft_putchar('0');
	lenght += ft_putchar('x');
	lenght += ft_hexanbr(n, 'x');
	return (lenght);
}

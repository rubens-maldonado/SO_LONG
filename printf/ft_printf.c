/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaldona <rmaldona@student42.rio>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 23:55:28 by rmaldona          #+#    #+#             */
/*   Updated: 2022/07/14 04:32:26 by rmaldona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_flags( va_list	list, char counter)
{
	int	i;

	i = 0;
	if (counter == 'c')
		return (i += (ft_putchar(va_arg(list, int))));
	else if (counter == 's')
		return (i += (ft_putstr(va_arg(list, char *))));
	else if (counter == 'p')
		return (ft_hexanbrn(va_arg(list, unsigned long)));
	else if (counter == 'd')
		return (i += (ft_putnbr(va_arg(list, int))));
	else if (counter == 'i')
		return (i += (ft_putnbr(va_arg(list, int))));
	else if (counter == 'u')
		return (i += (ft_putnosign(va_arg(list, unsigned int))));
	else if (counter == 'x')
		return (i += (ft_hexanbr(va_arg(list, unsigned int), counter)));
	else if (counter == 'X')
		return (i += (ft_hexanbr(va_arg(list, unsigned int), counter)));
	else if (counter == '%')
		i += ft_putchar('%');
	return (i);
}

int	ft_printf(const char *str, ...)
{
	va_list	list;
	int		i;
	int		print_lenght;

	i = 0;
	print_lenght = 0;
	va_start(list, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
			print_lenght += check_flags(list, str[++i]);
		else
			print_lenght += ft_putchar(str[i]);
		i++;
	}
	va_end (list);
	return (print_lenght);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaldona <rmaldona@student42.rio>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 05:33:06 by rmaldona          #+#    #+#             */
/*   Updated: 2022/07/14 04:33:37 by rmaldona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_putstr(char *s);
int	ft_atoi(const char *str);
int	ft_putchar(char c);
int	ft_putnbr(int n);
int	ft_putnosign(unsigned int n);
int	ft_puthex(unsigned int n);
int	ft_hexanbr(unsigned long n, char str);
int	ft_hexanbrn(unsigned long n);

#endif

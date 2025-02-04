/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaldona <rmaldona@student42.rio>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 16:47:15 by rmaldona          #+#    #+#             */
/*   Updated: 2022/06/02 20:00:49 by rmaldona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dst, const void	*src, size_t n)
{
	char		*s1;
	const char	*s2;

	s1 = dst;
	s2 = src;
	if (dst == 0 && src == 0)
		return (NULL);
	while (n-- > 0)
	{
		s1[n] = s2[n];
	}
	return (s1);
}
/*

#include <stdio.h>
#include <string.h>

int main () {
   char dest[] = "Rubens";
   const char src[]  = "Maldonado";

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   ft_memcpy(dest, src, 9);
   printf("After memmove dest = %s, src = %s\n", dest, src);

   return(0);
}*/

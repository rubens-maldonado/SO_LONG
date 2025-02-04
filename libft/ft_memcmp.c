/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaldona <rmaldona@student42.rio>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 14:23:28 by rmaldona          #+#    #+#             */
/*   Updated: 2022/05/31 14:36:46 by rmaldona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	const char	*str1;
	const char	*str2;

	i = 0;
	str1 = s1;
	str2 = s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (((unsigned char *)str1)[i] - ((unsigned char *)str2)[i]);
		i++;
	}
	return (0);
}

/*
int main () {
   char str1[15];
   char str2[15];
   int ret;

   memcpy(str1, "ABCDEF", 6);
   memcpy(str2, "ABC", 6);


   ret = memcmp(str1, str2, 5);

   if(ret > 0) {
      printf("ORIGINAL = str2 is less than str1 \n");
   } else if(ret < 0) {
      printf("ORIGINAL = str1 is less than str2 \n");
   } else {
      printf("ORIGINAL = str1 is equal to str2 \n");
   }

   ret = ft_memcmp(str1, str2, 5);

   if(ret > 0) {
      printf("str2 é diferente de str1");
   } else if(ret < 0) {
      printf("str1 é diferente de str2");
   } else {
      printf("str1 é igual str2");
   }

   return(0);
}*/

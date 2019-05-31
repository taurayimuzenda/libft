/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 10:01:46 by tmuzenda          #+#    #+#             */
/*   Updated: 2019/05/31 10:02:09 by tmuzenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"
#include	<stdio.h>
#include	<string.h>

void				*ft_memmove(void *dest, const void *src, size_t n)
{
   const char *str1 = (char *)src;
   char *str2 = (char *)dest;
   char *temp = NULL;

   while(n > 0)
   {
	   *temp = *str1;
	   n--;
   }

   while(n > 0)
   {
	   *str2 = *temp;
	   n--;
   }

   return (str2);

}
int main ()
{
   char dest[] = "Kudzanai Gomera";
   const char src[]  = "Ropa Kapita";

   printf("Mine : %p\n", ft_memmove(dest, src, 9));
   printf("Before memmove dest = %s, src = %s\n", dest, src);
   memmove(dest, src, 9);
   printf("After memmove dest = %s, src = %s\n", dest, src);
   

   return(0);
}

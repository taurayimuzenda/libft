/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 10:03:27 by tmuzenda          #+#    #+#             */
/*   Updated: 2019/05/31 10:03:47 by tmuzenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

void  *ft_memset (void *b, int c, size_t len)
{
  unsigned char *s;
  unsigned char a;
  
  s = (unsigned char *) b;
  a = (unsigned char) c;

  while (len > 0)
    {
      *s = a;
      len--;
    }
  return (s);
}

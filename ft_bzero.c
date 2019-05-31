/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 09:57:01 by tmuzenda          #+#    #+#             */
/*   Updated: 2019/05/31 09:57:24 by tmuzenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include            "libft.h"

void *ft_bzero(void * s, size_t n)
{
  char * c = s;
  
  while(n > 0)
  {
	  *c = '\0';
	  n--;
  }
  return (c);
}

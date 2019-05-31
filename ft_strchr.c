/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 10:16:44 by tmuzenda          #+#    #+#             */
/*   Updated: 2019/05/31 10:17:05 by tmuzenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char				*ft_strchr(const char *s1,  int n)
{

	char *str;
   
	str	= (char *)s1;

	while(*str != n)
			str++;
	if(*str ==  n)
		return((char *)str);
	else
		return (NULL);
}

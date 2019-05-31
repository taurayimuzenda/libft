/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 09:54:49 by tmuzenda          #+#    #+#             */
/*   Updated: 2019/05/31 09:55:13 by tmuzenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include			"libft.h"

char				*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while(dest[i] != '\0')
		i++;
	while(n > 0)
	{
		dest[i] = src[j];
		n--;
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

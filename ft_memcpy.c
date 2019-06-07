/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 09:59:37 by tmuzenda          #+#    #+#             */
/*   Updated: 2019/06/07 14:16:38 by tmuzenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dest, void *src, size_t n)
{
	size_t	i;
	char	*src2;
	char	*dst;

	if (!src && !dest)
		return (NULL);
	src2 = (char *)src;
	dst = (char *)dest;
	i = 0;
	while (i < n)
	{
		dst[i] = src2[i];
		i++;
	}
	return (dst);
}

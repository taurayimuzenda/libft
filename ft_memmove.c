/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 10:01:46 by tmuzenda          #+#    #+#             */
/*   Updated: 2019/06/06 16:43:56 by tmuzenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*a;
	char	*b;

	i = n;
	a = (char *)dst;
	b = (char *)src;
	if (a < b)
		return (ft_memcpy(a, b, n));
	if (n == 0 || a == b)
		return (a);
	while (i--)
		a[i] = b[i];
	return (a);
}

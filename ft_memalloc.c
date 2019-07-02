/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 12:09:14 by tmuzenda          #+#    #+#             */
/*   Updated: 2019/06/10 12:09:54 by tmuzenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *str;

	str = malloc(size);
	if (str != '\0' && size != '\0')
	{
		ft_bzero((void *)str, size);
		return (str);
	}
	return (NULL);
}

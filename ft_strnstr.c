/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 10:06:01 by tmuzenda          #+#    #+#             */
/*   Updated: 2019/06/06 12:31:13 by tmuzenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t i;

	i = 0;
	if (*needle == '\0')
	{
		return ((char *)haystack);
	}
	while (*haystack && n)
	{
		if (needle[i] == *haystack)
			i++;
		else
			i = 0;
		if (needle[i] == '\0')
			return ((char *)(haystack - i + 1));
		haystack++;
		n--;
	}
	return (NULL);
}

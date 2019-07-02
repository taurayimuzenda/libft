/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 12:02:29 by tmuzenda          #+#    #+#             */
/*   Updated: 2019/06/10 12:03:04 by tmuzenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	if (!(str = (char *)malloc(ft_strlen(s) + 1)))
		return (NULL);
	while (*s)
	{
		str[i] = (*f)(*s);
		i++;
		s++;
	}
	str[i] = '\0';
	return (str);
}

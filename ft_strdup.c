/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 09:48:04 by tmuzenda          #+#    #+#             */
/*   Updated: 2019/06/06 16:50:23 by tmuzenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *str)
{
	char	*str2;
	int		i;
	int		j;

	i = 0;
	while (str[i] != '\0')
		i++;
	i++;
	if (!(str2 = (char *)malloc(sizeof(char) * i)))
		return (NULL);
	j = 0;
	while (j < i)
	{
		str2[j] = str[j];
		j++;
	}
	str2[j] = '\0';
	return (str2);
}

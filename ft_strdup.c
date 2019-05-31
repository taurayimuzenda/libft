/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 09:48:04 by tmuzenda          #+#    #+#             */
/*   Updated: 2019/05/31 09:48:25 by tmuzenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include			"libft.h"

char				*ft_strdup(char *str)
{
	char	*str2;
	int		i;

	i = 0;
	while(str[i] != '\0')
		i++;
	i++;
	str2 = (char *)malloc (sizeof(char) * i + 1);
	while(i >= 0)
	{
		str2[i] = str[i];
		i--;
	}
	return(str2);
}

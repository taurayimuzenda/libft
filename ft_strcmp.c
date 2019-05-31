/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 10:14:16 by tmuzenda          #+#    #+#             */
/*   Updated: 2019/05/31 10:14:39 by tmuzenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include			"libft.h"

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while ((unsigned char)s1[i] && (unsigned char)s2[i]
			&& ((unsigned char)s1[i] == (unsigned char)s2[i]))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

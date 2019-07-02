/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 10:14:16 by tmuzenda          #+#    #+#             */
/*   Updated: 2019/07/02 12:34:53 by tmuzenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int		i;
	int		tmp;

	i = 0;
	while (*(s1 + i) && *(s1 + i) == *(s2 + i))
		i++;
	tmp = (*((unsigned char *)s1 + i) - *((unsigned char *)s2 + i));
	if (tmp > 0)
		return (1);
	else if (tmp < 0)
		return (-1);
	else
		return (tmp);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 10:11:19 by tmuzenda          #+#    #+#             */
/*   Updated: 2019/07/02 13:25:14 by tmuzenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	int				tmp;

	if (!n)
		return (0);
	i = 0;
	while (*(s1 + i) && *(s1 + i) == *(s2 + i) && i < n - 1)
		i++;
	tmp = (unsigned char)s1[i] - (unsigned char)s2[i];
	if (tmp > 0)
		return (1);
	else if (tmp < 0)
		return (-1);
	else
		return (tmp);
}

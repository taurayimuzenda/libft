/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 10:19:59 by tmuzenda          #+#    #+#             */
/*   Updated: 2019/07/02 13:32:55 by tmuzenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\r')
		return (1);
	else if (c == '\f' || c == '\v' || c == ' ')
		return (1);
	else
		return (0);
}

int				ft_atoi(const char *str)
{
	int			res;
	int			negative;

	negative = 1;
	res = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
	{
		negative = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
		res = (res * 10) + (*str++ - 48);
	return (negative * res);
}

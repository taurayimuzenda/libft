/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 10:19:59 by tmuzenda          #+#    #+#             */
/*   Updated: 2019/05/31 10:20:20 by tmuzenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int				ft_isdigit (int i)
{
	if (i >= '0' && i <= '9')
	{
		return (1);
	}
	else
		return (0);
}

int				ft_atoi (const char *str)
{
	int		i;
	int		n;

	i = 0;
	   while ((*str >= '\t' && *str <= '\r') || *str == 32)
		str++;
	   if (*str == '-')
		   n  = -1;
	   else
		   n = 1;
	   if (*str == '-' || *str == '+')
		   str++;
	   while (*str && ft_isdigit(*str))
		i = (i * 10) + (*str++ - '0');
	return (i * n);

}

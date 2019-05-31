/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 11:50:10 by tmuzenda          #+#    #+#             */
/*   Updated: 2019/05/23 12:10:32 by tmuzenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
int		ft_isalnum (int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= 0 && c <= 9))
		return (1);
	else
	return (0);
}

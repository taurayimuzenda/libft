/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 12:43:29 by tmuzenda          #+#    #+#             */
/*   Updated: 2019/05/23 13:12:26 by tmuzenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
int	ft_isalpha (int c)
{
	if (c >= 65 && c <=90  || c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

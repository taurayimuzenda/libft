/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 10:11:19 by tmuzenda          #+#    #+#             */
/*   Updated: 2019/05/31 10:11:39 by tmuzenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include	"libft.h"

int				ft_strncmp(const char *str1, const char *str2, size_t n)
{
	int i;

	i = 0;
	while (n  > 0)
	{
	if (*str1 != *str2)
		return (*str1 - *str2);
	if (*str1 == '\0' && *str2 == '\0')
		return (0);
	str1++;
	str2++;
	i++;
	}
return (0);

}

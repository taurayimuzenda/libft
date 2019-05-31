/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 12:32:05 by tmuzenda          #+#    #+#             */
/*   Updated: 2019/05/30 12:33:00 by tmuzenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include          "libft.h"

char                *ft_strstr (const char *str, const char *to_search)
{
   const char *a;
   const char *b;

    b = to_search;

    if (*b  == '\0')
        return (char *)str;

    if (*str == '\0')
        return (NULL);

    while (*str != '\0')
    {
        if (*str == *b)
        {
            a = str;
            while (*a == *b || *b== '\0')
            {
                if (*b == '\0')
                    return (char *)str;
                a++;
                b++;
            }
        }
        str++;
    }
    return (char *) to_search;
}

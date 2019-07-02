/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 11:53:10 by tmuzenda          #+#    #+#             */
/*   Updated: 2019/07/02 10:51:08 by tmuzenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_words(char const *s, char c)
{
	int			words;
	int			i;

	words = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != c && s[i])
			words++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (words);
}

char			**ft_strsplit(char const *s, char c)
{
	char		**arr;
	int			i;
	int			j;
	int			k;

	i = 0;
	if (s == NULL)
		return (NULL);
	k = ft_words(s, c);
	arr = (char **)malloc(sizeof(char *) * (k + 1));
	if (!arr)
		return (NULL);
	k = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (s[i] == c && s[i] != '\0')
			i++;
		while (s[i] != c && s[i] != '\0' && ++j)
			i++;
		if (s[i - 1] != c)
			arr[k++] = ft_strsub(s, i - j, j);
	}
	arr[k] = NULL;
	return (arr);
}

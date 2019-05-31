/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 10:06:01 by tmuzenda          #+#    #+#             */
/*   Updated: 2019/05/31 10:07:01 by tmuzenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include		<stdio.h>
#include		<string.h>


char				*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	const char *a;
	const char *b;

	b = needle;

	if(*b == '\0')
		return(char *)haystack;
	if(*haystack == '\0')
		return (NULL);
	while(*haystack != '\0'&& n > 0 )
	{
		if(*haystack == *b)
		{
			a = haystack;
			while(*a == *b || *b == '\0')
			{
				if(*b == '\0')
					return (char *)haystack;
				a++;
				b++;
			}
		}
		haystack++;
		n++;
	}
	return(char *)needle;
}
/*int				main(void)
{
	char *dest = "Hello World Taurayi is here";
	char *src = "World";
	char *result;
	result = strnstr(dest, src, 10);
	printf("built: %s\n", result);
	//printf("strstr:  %s\n",strstr(dest, src));
	printf("mine: %s\n", ft_strnstr(dest, src, 10));
	return (0);
}*/

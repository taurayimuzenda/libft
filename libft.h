/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 17:19:57 by tmuzenda          #+#    #+#             */
/*   Updated: 2019/05/30 17:20:22 by tmuzenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <ctype.h>

size_t				ft_strlen(const char *str);
char				*ft_strncpy(char *dst, char *src, size_t n);
char				*ft_strcpy(char *str1, char *str2);
char                *ft_strstr(const char *str, const char *to_search);
char				*ft_strdup(char *str);
char				*ft_strchr(const char *s1, int n);
char				*ft_strcat(char *dest, const char *src);
char				*ft_strncat(char *dest, const char *src, size_t n);
int				ft_strcmp(char *s1, char *s2);
int				ft_isalpha(int c);
int				ft_isdigit(int i);
int				ft_tolower(int c);
int				ft_toupper(int c);
int				ft_isprint(int c);
int				ft_isascii(int c);
int				ft_isalnum(int c);
int             ft_atoi(const char *str);
int				ft_strncmp(const char *str1, const char *str2, size_t n);
void				ft_putchar(char c);
void				*ft_mempcy(void *dest, void *src, size_t n);
void				*ft_memset(void *b, int c, int len);
void				*ft_bzero(void * s, size_t n);

#endif

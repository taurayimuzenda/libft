/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 17:19:57 by tmuzenda          #+#    #+#             */
/*   Updated: 2019/06/10 15:32:56 by tmuzenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <ctype.h>

size_t	ft_strlen(const char *str);
char	*ft_strncpy(char *s1, const char *s2, size_t n);
char	*ft_strcpy(char *str1, char *str2);
char	*ft_strstr(const char *str, const char *to_search);
char	*ft_strdup(char *str);
char	*ft_strchr(const char *s1, int n);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strncat(char *dest, const char *src, size_t n);
int		ft_strcmp(char *s1, char *s2);
int		ft_isalpha(int c);
int		ft_isdigit(int i);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_isprint(int c);
int		ft_isascii(int c);
int		ft_isalnum(int c);
int		ft_atoi(const char *str);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
void	ft_putchar(char c);
void	*ft_memcpy(void *dest, void *src, size_t n);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
char	*ft_strrchr(const char *s, int c);
char    *ft_itoa(int n);
void    *ft_memalloc(size_t size);
void    ft_memdel(void **ap);
char	*ft_strnew(size_t size);
void    ft_strdel(char **as);
void    ft_strclr(char *s);
void    ft_striter(char *s, void (*f)(char *));
void    ft_striteri(char *s, void (*f)(unsigned int, char *));
char        *ft_strmap(char const *s, char (*f)(char));
char        *ft_strmapi(char const *s, char (*f)(unsigned int, char));
int     ft_strequ(char const *s1, char const *s2);
int     ft_strnequ(char const *s1, char const *s2, size_t n);
char        *ft_strsub(const char *s, unsigned int start, size_t len);
char    *ft_strjoin(char const *s1, char const *s2);
char        *ft_strtrim(const char *str);
void    ft_putnbr(int n);
void    ft_putnbr_fd(int n, int fd);
void    ft_putendl(char const *s);
void    ft_putendl_fd(char const *s, int fd);
void    ft_putstr(char const *s);
void    ft_putstr_fd(char const *s, int fd);
void	ft_putchar_fd(char c, int fd);
#endif

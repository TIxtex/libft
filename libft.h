/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulherrer <ulherrer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 20:54:58 by uherrero          #+#    #+#             */
/*   Updated: 2022/04/09 19:04:32 by ulherrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <limits.h>
# include <unistd.h> // write();
# include <stdlib.h> // malloc();
# include <stddef.h> // NULL, size_t, offsetof();
# include <sys/types.h>// u_char
# include <sys/time.h>// gettimeofday();
# include <sys/errno.h>
# include "my_constant.h"
# include "my_types.h" // t_smart_str
# include "ft_lst/lst.h"
# include "ft_gnl/get_next_line.h"

// START_FT_BIT
void		ft_bit_clear(u_char var, u_char bit);
void		ft_bit_get(u_char var, u_char bit);
void		ft_bit_set(u_char var, u_char bit);
void		ft_bit_toggle(u_char var, u_char bit);
void		ft_bit(u_char bit);
// END_FT_BIT

// START_FT_NUMBERS
int			ft_atoi(const char *str);
char		*ft_itoa(int n);
char		*ft_utoa(unsigned int n);
//END_FT_NUMBERS

// START_FT_CHAR
int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isascii(int c);
int			ft_isdigit(int c);
int			ft_isprint(int c);
int			ft_isspace(int c);
int			ft_tolower(int c);
int			ft_toupper(int c);
//END_FT_CHAR

// START_FT_STR
size_t		ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t		ft_strlcpy(char *dest, const char *src, size_t dstsize);
size_t		ft_strlen(const char *s);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
char		*ft_strnstr(const char *haystack, const char *needle, size_t len);
char		*ft_strrchr(const char *s, int c);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strjoin_f1(char *s1, char const *s2);
char		*ft_strjoin_f2(char const *s1, char *s2);
char		*ft_strjoin_f1_f2(char *s1, char *s2);
char		*ft_strtrim(char const *s1, char const *set);
char		*ft_strchr(const char *s, int c);
char		*ft_strdup(const char *s1);
void		ft_strrev(char *str);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char		**ft_split(char const *s, char c);
//END_FT_STR

// START_FT_MEM
void		*ft_memccpy(void *dst, const void *src, int c, size_t n);
void		*ft_memchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memcpy_r(void *dst, const void *src, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t len);
void		*ft_memset(void *b, int c, size_t len);
void		ft_bzero(void *s, size_t n);
void		*ft_calloc(size_t count, size_t size);
//END_FT_MEM

// START_FT_PUT
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);
void		ft_puterror(const char *error);
//END_FT_PUT

// START_FT_TIME
long long	ft_time_now(void);
long long	ft_time_diff(long long start, long long end);
//END_FT_TIME

#endif

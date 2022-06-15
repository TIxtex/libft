#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h> /**	write();	**/
# include <stdlib.h> /**	malloc();	**/
# include <stddef.h> /**	NULL, size_t, offsetof();	**/
# include <limits.h>
# include <sys/time.h>/**	gettimeofday();	**/
# include <sys/errno.h>
# include "my_constant.h"
# include "my_types.h"
# include "ft_list/lst.h"
# include "ft_gnl/get_next_line.h"


/**	START_FT_BIT	**/
unsigned char	ft_bit_clear(unsigned char var, unsigned int bit);
unsigned char	ft_bit_get(unsigned char var, unsigned char bit);
unsigned char	ft_bit_set(unsigned char var, unsigned char bit);
unsigned char	ft_bit_toggle(unsigned char var, unsigned char bit);
unsigned char	ft_bit(unsigned char x);
/**	END_FT_BIT	**/

/**	START_FT_NUM	**/
int			ft_atoi(const char *str);
long		ft_atol(const char *str);
long int	ft_strtol(const char *str, char **endptr, int base);
char		*ft_itoa(int n);
char		*ft_utoa(unsigned int n);
/**	END_FT_NUM	**/

/**	START_FT_CTYPE	**/
int			ft_isalnum(int x);
int			ft_isalpha(int x);
int			ft_isascii(int x);
int			ft_isdigit(int x);
int			ft_islower(int x);
int			ft_isprint(int x);
int			ft_isspace(int x);
int			ft_isupper(int x);
int			ft_isxdigit(int x);
int			ft_tolower(int x);
int			ft_toupper(int x);
/**	END_FT_CTYPE	**/

/**	START_FT_STR	**/
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
void		ft_striteri(char *s, void (*f)(unsigned int, char *));
char		**ft_split(char const *s, char c);
/**	END_FT_STR	**/

/**	START_FT_MEM	**/
void		*ft_memccpy(void *dst, const void *src, int c, size_t n);
void		*ft_memchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memcpy_r(void *dst, const void *src, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t len);
void		*ft_memset(void *b, int c, size_t len);
void		ft_bzero(void *s, size_t n);
void		*ft_calloc(size_t count, size_t size);
/** END_FT_MEM	**/

/**	START_FT_PUT	**/
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);
void		ft_puterror(const char *error);
/**	END_FT_PUT	**/

/**	START_FT_TIME	**/
long long	ft_time_now(void);
long long	ft_time_diff(long long start, long long end);
/**	END_FT_TIME	**/

#endif

#include <stdio.h>
#include <string.h>
#include "libft.h"

long long	test(void *f(void *, int, size_t), void *dst, int c, size_t len)
{
	int		time_i;
	int		time_end;
	size_t	i;

	i = ZERO;
	time_i = ft_time_now();
	while (++i < 126)
		f(dst, i, len);
	time_end = ft_time_now();
	return (ft_time_diff(time_i, time_end));
}

int	main(void)
{
	size_t	len;
	int		c;
	void	*test_v;
	void	*(*fun)(void *, int, size_t);

	c = 1;
	len = 20000;
	fun = &memset;
	test_v = ft_calloc(len + 1, sizeof(char));
	if (!test_v)
		return (0);
	printf("Time: %lld		memset()\n", test(fun, test_v, c, len));
	ft_bzero(test_v, len + 1);
	fun = &ft_memset;
	printf("Time: %lld		ft_memset()\n", test(fun, test_v, c, len));
	free(test_v);
	return (42);
}
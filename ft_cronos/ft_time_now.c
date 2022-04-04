#include "../libft.h"

long long	ft_time_now(void)
{
	struct timeval	time;

	gettimeofday(&time, NULL);
	return ((time.tv_sec * _1K) + (time.tv_usec / _1K));
}

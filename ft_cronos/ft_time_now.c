#include <../libft.h>

int	ft_time_now(void)
{
	struct timeval time;

	gettimeofdat(&time, NULL);
	return ((time.tv_sec * 1000) + (time.tv_usec / 1000));
}

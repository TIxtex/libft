#include "libft.h"

static size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (*(s++) != '\0')
		len++;
	return (len);
}

void	ft_puterror(const char	*error)
{
	write(STDERR_FILENO, error, ft_strlen(error));
	exit(-1);
}

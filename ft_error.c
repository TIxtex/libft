#include "libft.h"

void	ft_error(const char	*error)
{
	write(STDERR_FILENO, error, ft_strlen(error));
	exit(-1);
}

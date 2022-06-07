#include "../libft.h"

void	ft_puterror(const char *error)
{
	if (NULL != error)
	{
		write(STDERR_FILENO, "Error: ", 7);
		write(STDERR_FILENO, error, ft_strlen(error));
		write(STDERR_FILENO, "\n", 1);
	}
	exit(-42);
}

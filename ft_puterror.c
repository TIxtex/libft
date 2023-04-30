#include "libft.h"

void	ft_puterror(const char *error)
{
	if (NULL != error)
	{
		write(STDERR_FILENO, "Error: ", 7 * sizeof(char));
		write(STDERR_FILENO, error, ft_strlen(error) * sizeof(char));
		write(STDERR_FILENO, "\n", sizeof(char));
	}
	exit(-42);
}

#include "../libft.h"

void	ft_puterror(const char	*error)
{
	write(STDERR_FILENO, error, ft_strlen(error) * sizeof(char));
	exit(-42);
}

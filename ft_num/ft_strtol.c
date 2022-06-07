#include "../libft.h"

long int	ft_strtol(const char *str, char **endptr, int base)
{
	return(strtol(str, endptr, base));
}
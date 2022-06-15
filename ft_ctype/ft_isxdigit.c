#include "../libft.h"

int	ft_isxdigit(int x)
{
	if ((unsigned) x - '0' < 10 || (unsigned) x - 'a' < 6 || (unsigned) x - 'A' < 6)
		return (TRUE);
	return (FALSE);
}
#include "libft.h"

int	ft_isupper(int x)
{
	if ((unsigned) x - A_UPPER < 26)
		return (TRUE);
	return (FALSE);
}

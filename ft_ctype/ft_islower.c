#include "../libft.h"

int	ft_islower(int x)
{
	if ((unsigned) x - A_LOWER < 26)
		return (TRUE);
	return (FALSE);
}

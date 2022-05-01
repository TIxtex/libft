#include "../libft.h"

/* BIT_GET(x, b) regresa el bit BIT de VAR ej. BIT_GET(VAR, 3) */
u_char	ft_bit_get(u_char var, u_char bit)
{
	return (var & ft_bit(bit));
}

void	ft_bit_get(u_char var, u_char bit)
{
	return (var & ft_bit(bit));
}
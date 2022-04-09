#include "../libft.h"

/* BIT_SET(x,b) establece en '1' el bit BIT de VAR
 ej. BIT_SET(VAR, 4) */
u_char	ft_bit_set(u_char var, u_char bit)
{
	return (var |= ft_bit(bit));
}

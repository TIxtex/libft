#include "../libft.h"

/* BIT_CLEAR(x,b) establece en '0' el bit BIT de VAR
 ej. BIT_CLEAR(VAR, 4) */
u_char	ft_bit_clear(u_char var, u_char bit)
{
	return (var &= ~ft_bit(bit));
}

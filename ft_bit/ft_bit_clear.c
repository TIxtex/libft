#include "../libft.h"

/* BIT_CLEAR(x,b) establece en '0' el bit BIT de VAR
 ej. BIT_CLEAR(VAR, 4) */
u_char	ft_bit_clear(u_char var, u_int bit)
{
	return (var &= ~ft_bit(bit));
}

void	ft_bit_clear(void *var, u_int *bit)
{
	ft_bit(bit);
	*var = (*var &= ~(*bit));
}
/* ej. 11111111 AND 11110111 == 11110111
*/

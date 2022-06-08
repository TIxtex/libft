#include "../libft.h"

/* BIT_TOGGLE(x,b) invierte el valor del bit b de x a su complemento */
unsigned char	ft_bit_toggle(unsigned char var, unsigned char bit)
{
	return (var ^= ft_bit(bit));
}

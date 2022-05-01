#include "../libft.h"

/* BIT_TOGGLE(x,b) invierte el valor del bit b de x a su complemento */
u_char	ft_bit_toggle(u_char var, u_char bit)
{
	return (var ^= ft_bit(bit));
}

void	ft_bit_toggle(void *var, u_int *bit)
{
	ft_bit(bit);
	*var = (*var ^= *bit);
}

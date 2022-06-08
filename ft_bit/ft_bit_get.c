#include "../libft.h"

/* regresa el bit BIT de VAR ej. BIT_GET(VAR, 3) */
unsigned char	ft_bit_get(unsigned char var, unsigned char bit)
{
	return (var & ft_bit(bit));
}

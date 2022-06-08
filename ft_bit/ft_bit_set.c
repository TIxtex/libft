#include "../libft.h"

/* BIT_SET(x,b) establece en '1' el bit BIT de VAR
 ej. BIT_SET(VAR, 4) */
unsigned char	ft_bit_set(unsigned char var, unsigned char bit)
{
	return (var |= ft_bit(bit));
}
/* 11110111 OR 00001000 == 11111111
*/

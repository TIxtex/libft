#include "../libft.h"

/* regresa el bit x puesto a uno y los demas bits en cero
 ej. BIT(3) regresa 00001000 && BIT(0) regresa 00000001 */
unsigned char	ft_bit(unsigned char x)
{
	return (1 << x);
}

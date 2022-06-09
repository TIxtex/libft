#include "../libft.h"

long int	ft_atol(const char *str)
{
	long			negative;
	unsigned long	value;

	value = ZERO;
	negative = TRUE;
	while (TRUE == ft_isspace(*str))
		str++;
	if ('+' == *str || '-' == *str)
		if ('-' == *(str++))
			negative = -1;
	while (TRUE == ft_isdigit(*str))
		value = value * 10 + *(str++) - '0';
	return ((long) value * negative);
}
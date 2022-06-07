#include "../libft.h"

long int	ft_strtol(const char *str, char **endptr, int base)
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
	/** **/
	while (TRUE == ft_isdigit(*str))
		value = value * base + *(str++) - '0';
	/** **/
	*endptr = str;
	return ((long)value * negative);
}
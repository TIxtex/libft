#include "../libft.h"

static unsigned long	ft_bs(char *str, int base)
{
	unsigned long	value;

	value = ZERO;
	if ('\0' != *str)//mejorar condicion
	{
		if (TRUE == ft_isdigit(*str))
			value = *str - '\0' + ft_bs(str + 1, base);
		else
			value = + ft_bs(str + 1, base);
	}
	return(value);
}

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
	while ('\0' != *str)
	{
		if (TRUE == ft_isdigit(*str))
			value = value * base + *(str++) - '0';
		else
			value = value * base + *(str++) - 'W';
	}
	/** **/
	*endptr = (char *)str;
	return ((long)value * negative);
}
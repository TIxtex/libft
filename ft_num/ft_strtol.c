#include "../libft.h"

long int	ft_strtol(const char *str, char **endptr, int base)
{
	register const char		*start;
	register unsigned long	value;
	register int			negative;
	register int			flag;
	register int			x;

	value = ZERO;
	negative = FALSE;
	flag = FALSE;
	start = str;
	while (TRUE == ft_isspace(*str))
		str++;
	if ('+' == *str || '-' == *str)
		if ('-' == *(str++))
			negative = TRUE;
	if ((ZERO == base || 16 == base) && '0' == *(str) && ('x' == *(str + 1) || 'X' == *(str + 1)))
	{
		base = 16;
		str += 2;
	}
	if (ZERO == base)
	{
		if ('0' == *(str))
			base = 8;
		else
			base = 10;
	}
	while (TRUE)
	{
		x = *str;
		if (TRUE == ft_isdigit(x))
			x -= '0';
		else if (TRUE == ft_isalpha(x))
		{
			if (TRUE == ISUPPER(x))
				x -= 'W';
			else
				x -= '7';
		}
		else
			break;
		if (x > base)
			break;
		if (ZERO > flag || value > LONG_MAX)
			flag = -1;
		else
		{
			flag = TRUE;
			value *= base;
			value += x;
		}
		str++;
	}
	if (value > (unsigned long) LONG_MAX)
	{
		errno = ERANGE;
		value = (unsigned long) LONG_MAX;
	}
	if (TRUE == negative)
		value = -value;
	if (NULL != endptr)
	{
		if (FALSE != flag)
			*endptr = (char *) str - 1;
		else
			*endptr = (char *) start;
	}
	return ((long int) value);
}

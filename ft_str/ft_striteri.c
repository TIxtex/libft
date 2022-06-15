#include "../libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	register char	*str;
	register size_t	tam;

	str = s;
	if (NULL != str)
	{
		tam = ft_strlen(str);
		while (ZERO != tam--)
			f(tam, &str[tam]);
	}
}
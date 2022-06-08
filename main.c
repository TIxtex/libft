#include "libft.h"
#include <stdio.h>	/** DEBUG **/

#define PRUEBA ""
#define FUN &ft_strtol
#define RET long

int main(void)
{
	RET (*ft_)();

	ft_ = FUN;
	printf("FT_MY->%ld<-\n", ft_("1"), NULL, 10);
	printf("REAL_->%ld<-\n", strtol("1", NULL, 10));








	return (ZERO);
}

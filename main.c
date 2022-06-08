#include "libft.h"
#include <stdio.h>	/** DEBUG **/

#define PRUEBA ""
#define FUN &ft_strtol
#define RET long

int main(void)
{
	RET (*ft_)();

	ft_ = FUN;
	printf("FT_MY->%ld<-\n", ft_("ff"), NULL, 16);
	printf("REAL_->%ld<-\n", strtol("ff", NULL, 16));








	return (ZERO);
}

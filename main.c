#include "libft.h"
#include <stdio.h>	/** DEBUG **/

#define PRUEBA ""
#define FUN &ft_atol
#define RET long

int main(void)
{
	RET (*ft_)();

	ft_ = FUN;
	printf("FT_MY->%ld<-\n", ft_("666"));
	printf("REAL_->%ld<-\n", strtol("f", NULL, 16));








	return (ZERO);
}

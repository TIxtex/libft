#include "libft.h"
#include <stdio.h>	/** DEBUG **/

#define PRUEBA 57
#define FUN &ft_putnbr_fd
#define RET void

int main(void)
{
	RET (*ft_)(int, int);

	ft_ = FUN;
	ft_(PRUEBA, STDOUT_FILENO);
	printf("\nREAL_->%d<-\n", PRUEBA);








	return (ZERO);
}

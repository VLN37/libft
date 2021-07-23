#include "libft.h"

void	ft_bzero(void *str, size_t len)
{
	while (len-- > 0)
	{
		*(char *)str = 0;
		str++;
	}
}

#include "libft.h"

//overwrites the first N bytes of STR with C
void	*ft_memset(void *str, int c, size_t len)
{
	int	size;

	size = len;
	while (len-- > 0)
	{
		*(char *)str = c;
		str++;
	}
	return (str - size);
}

#include "libft.h"
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	void	*ptr;

	ptr = dest;
	while (n > 0)
	{
		*(char *)dest++ = *(char *)src++;
		n--;
	}
	return (ptr);
}

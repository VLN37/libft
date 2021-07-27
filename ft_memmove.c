#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*ptr;

	ptr = dest;
	if (src < dest && src + n > dest)
	{
		src = src + n - 1;
		dest = dest + n - 1;
		while (n > 0)
		{
			*(char *)dest-- = *(char *)src--;
			n--;
		}
	}
	else if (dest < src && dest + n > src)
	{
		while (n > 0)
		{
			*(char *)dest++ = *(char *)src++;
			n--;
		}
	}
	else
		return (ft_memcpy(dest, src, n));
	return (ptr);
}

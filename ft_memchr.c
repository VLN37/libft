#include "libft.h"
#include <string.h>

void	*ft_memchr (const void *s, int c, size_t n)
{
	void	*tmp;

	tmp = (void *)s;
	while (n > 0)
	{
		if (*(unsigned char *)tmp == (unsigned char)c)
			return (tmp);
		n--;
		tmp++;
	}
	return (NULL);
}

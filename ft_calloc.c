#include "libft.h"
#include <string.h>

	//what do i return on overflow handling? line 15
void	*ft_calloc(size_t nbr, size_t size)
{
	size_t			maxnbr;
	unsigned int	bytes;
	void			*ptr;
	void			*tmp;


	maxnbr = 4294967295 / size;
	if (nbr > maxnbr || nbr == 0 || size == 0)
		return (NULL);
	ptr = malloc(nbr * size);
	if (ptr == NULL)
		return (NULL);
	tmp = ptr;
	bytes = nbr * size;
	while (bytes > 0)
	{
		*(char *)ptr = '\0';
		ptr++;
		bytes--;
	}
	return (tmp);
}

#include "libft.h"

//returns the address of the first occurrence of c in str
char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == c)
			return (&*(char *)str);
		str++;
	}
	if (*str == c)
		return (&*(char *)str);
	return (NULL);
}

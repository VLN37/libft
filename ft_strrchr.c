#include "libft.h"

//returns the address of the last occurrence of c in str
char	*ft_strrchr(const char *str, int c)
{
	char	*addrs;

	addrs = NULL;
	while (*str)
	{
		if (*str == c)
			addrs = &*(char *)str;
		str++;
	}
	if (*str == c)
		addrs = &*(char *)str;
	return (addrs);
}

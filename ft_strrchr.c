#include "libft.h"

//returns the address of the last occurrence of c in str
char	*ft_strrchr(char *str, int c)
{
	char	*addrs;

	addrs = NULL;
	while (*str)
	{
		if (*str == c)
			addrs = &*str;
		str++;
	}
	if (*str == c)
		addrs = &*str;
	return (addrs);
}

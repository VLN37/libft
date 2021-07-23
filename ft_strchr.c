#include "libft.h"

//returns the address of the first occurrence of c in str
char	*ft_strchr(char *str, int c)
{
	while (*str)
	{
		if (*str == c)
			return (*&str);
		str++;
	}
	if (*str == c)
		return (*&str);
	return (NULL);
}

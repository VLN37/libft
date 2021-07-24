#include "libft.h"

//allocates a new string and returns the concatenation of the two arguments
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		size;

	size = (ft_strlen((char *)s1) + ft_strlen((char *)s2));
	res = (char *)malloc(sizeof(char) * (size + 1));
	if (!res)
		return (NULL);
	while (*s1)
		*res++ = *s1++;
	while (*s2)
		*res++ = *s2++;
	*res = 0;
	return (res - size);
}

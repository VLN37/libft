#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return ((char *)str);
	while (str[i] != '\0' && i < n)
	{
		while (str[i] == to_find[j] && i < n)
		{
			j++;
			i++;
			if (to_find[j] == '\0')
				return ((char *)&str[i - j]);
			if (str[i] != to_find[j])
				j = 0;
		}
		i++;
	}
	str = 0;
	return ((char *)str);
}

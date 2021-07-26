#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!to_find[0])
		return ((char *)str);
	while (str[i] && i < n)
	{
		while (str[i] == to_find[j] && i < n)
		{
			j++;
			i++;
			if (!to_find[j])
				return ((char *)&str[i - j]);
			if (str[i] != to_find[j])
			{
				i = i - j + 1;
				j = 0;
			}
		}
		i++;
	}
	return (NULL);
}

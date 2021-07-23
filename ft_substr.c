#include "libft.h"
#include <stdio.h>

static char	*ft_createstr(char *str, size_t size)
{
	if (!(str = malloc(sizeof(char) * size)))
		return (NULL);
	else
		return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*adrs;

	adrs = NULL;
	if (ft_strlen((char *)s) < (int)start)
		return (NULL);
	if (ft_strlen((char *)s) + 1 > (int)len)
	{
		if (!(adrs = ft_createstr(adrs, len)))
			return (NULL);
	}
	else
	{
		if (!(adrs = ft_createstr(adrs, ft_strlen((char *)s) + 1)))
			return (NULL);
	}
	i = 0;
	while (i < len && s[start + i])
	{
		*adrs++ = s[start + i];
		i++;
	}
	*adrs = 0;
	return (adrs - i);
}

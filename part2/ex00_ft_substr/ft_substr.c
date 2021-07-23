#include "../../libft.h"
#include <stdio.h>

static int	ft_createstr(char **str, size_t size)
{
	*str = malloc(sizeof(char) * size);
	if (!str)
		return (0);
	else
		return (1);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*adrs;

	adrs = NULL;
	if (ft_strlen((char *)s) + 1 < (int)start)
		return (NULL);
	if (ft_strlen((char *)s) + 1 > (int)len)
	{
		if (!ft_createstr(&adrs, len))
			return (NULL);
	}
	else
	{
		if (!ft_createstr(&adrs, ft_strlen((char *)s) + 1))
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

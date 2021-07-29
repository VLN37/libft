#include "libft.h"
#include <stdio.h>

static int	ft_createstr(char **str, size_t size, char const *s)
{
	if (ft_strlen(s) < size)
		*str = (char *)ft_calloc(ft_strlen(s) + 1, sizeof(char));
	else
		*str = (char *)ft_calloc(size + 1, sizeof(char));
	if (!*str)
		return (0);
	else
		return (1);
}

//creates a substring of 's' starting
//from the index 'start' of maximum size 'len'
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*adrs;

	adrs = NULL;
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (!(ft_createstr(&adrs, ft_strlen(s), s)))
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		*adrs++ = s[start + i];
		i++;
	}
	if (i <= len)
		*adrs = 0;
	return (adrs - i);
}

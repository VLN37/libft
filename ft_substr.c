#include "libft.h"

static int	ft_createstr(char **str, size_t size,
unsigned int start, char const *s)
{
	if (ft_strlen(s) < start && size == 1)
		*str = (char *)ft_calloc(size, sizeof(char));
	else
		*str = (char *)ft_calloc(size + 1, sizeof(char));
	if (!*str)
		return (0);
	else
		return (1);
}

/**
 * @brief Returns a freshly allocated string starting from the Nth element of
 * S and with at most len bytes. If parameters are invalid, the string will be
 * empty.
 */
char	*ft_substr(char const *s, unsigned int n, size_t len)
{
	unsigned int	i;
	char			*adrs;

	if (!s)
		return (NULL);
	if (n > ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen((s + n)) + 1 > len)
	{
		if (!(ft_createstr(&adrs, len, n, s)))
			return (NULL);
	}
	else
	{
		if (!(ft_createstr(&adrs, ft_strlen((s + n)), n, s)))
			return (NULL);
	}
	i = 0;
	while (i < len && s[n + i])
		*adrs++ = s[n + i++];
	if (i <= len)
		*adrs = 0;
	return (adrs - i);
}

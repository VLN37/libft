#include "libft.h"

static int	strcount(char const *s, char c)
{
	int	i;

	i = 1;
	while (*s)
	{
		if (*s == c && *(s + 1) && *(s + 1) != c)
			i++;
		if (*s == c && !*(s + 1) && i == 1)
			return (0);
		s++;
	}
	if (i > 0)
		i++;
	return (i);
}

static int	strsize(char *s, char c)
{
	int	i;

	i = 0;
	while (*s != c && *s)
	{
		s++;
		i++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	int		strctr;
	int		i;
	char	**res;

	i = 0;
	strctr = strcount(s, c);
	res = (char **)malloc(sizeof(char *) * (strctr + 1));
	if (!s)
		return (NULL);
	if (!res)
		return (NULL);
	while (*s)
	{
		while (*s == c)
			s++;
		res[i] = ft_calloc(strsize((char *)s, c) + 1, sizeof(char));
		if (!res[i])
		{
			while (i >= 0)
				free(res[i--]);
			return (NULL);
		}
		ft_strlcpy(res[i++], (char *)s, strsize((char *)s, c) + 1);
		while (*s && *s != c)
			s++;
		while (*s == c)
			s++;
	}
	res[i] = NULL;
	return (res);
}

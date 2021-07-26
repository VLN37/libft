

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
				j = 0;
		}
		i++;
	}
	return (NULL);
}

#include <stdio.h>

int	main(void)
{
	char haystack[30] = "aaabcabcd";
	char needle[10] = "aabc";
	char * empty = (char*)"";

	printf("%s\n", ft_strnstr(haystack, needle, -1));
}

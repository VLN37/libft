#include <stdio.h>

char *ft_substr(char const *s, unsigned int start, size_t len);

int	main(void)
{
	char str1[] = "12345 return this!";
	printf("%s\n", ft_substr(str1, 0, 15));
}

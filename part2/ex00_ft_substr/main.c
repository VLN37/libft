#include <stdio.h>

char *ft_substr(char const *s, unsigned int start, size_t len);

int	main(void)
{
	char	str1[] = "12345 return this!";
	char	str2[] = "lorem ipsum dolor sit amet";
	printf("1 - %s\n", ft_substr(str2, 0, 10));
	printf("2 - %s\n", ft_substr(str2, 7, 10));
	printf("3 - %s\n", ft_substr(str2, 7, 0));
	printf("4 - %s\n", ft_substr(str2, 0, 0));
	printf("5 - %s\n", ft_substr(str2, 400, 200));
	printf("6 - %s\n", ft_substr(str1, 0, 15));
}

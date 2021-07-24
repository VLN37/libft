#include "../libft.h"

//allocates a new string and returns the concatenation of the two arguments
char *	ft_strjoin(char const *s1, char const *s2)
{
	char *res;

	res = malloc(sizeof(char) * (ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1));
	while(*s1)
		*res++ = *s1++;
	while (*s2)
		*res++ = *s2++;
	*res = 0;
	return (res);
}

#include <stdio.h>
int	main(void)
{
	char str1[] = "hello";
	char str2[] = "world";
	char *str3;
	str3 = ft_strjoin(str1, str2);
	printf("%s\n", str3);
	free(str3);
}

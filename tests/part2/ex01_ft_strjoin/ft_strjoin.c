#include "libft.h"
#include <stdio.h>

//allocates a new string and returns the concatenation of the two arguments
char	*ft_strjoin(char const *s1, char const *s2)
{
	char *res;
	int		size;

	size = (ft_strlen((char *)s1) + ft_strlen((char *)s2));
	res = malloc(sizeof(char) * (size + 1));
	while(*s1)
		*res++ = *s1++;
	while (*s2)
		*res++ = *s2++;
	*res = 0;

	return (res - size);
}


int	main(void)
{
	char str1[] = "hello";
	char str2[] = "world";
	char *str3;
	str3 = ft_strjoin(str1, str2);
	printf("%s\n", str3);
	free(str3);
}

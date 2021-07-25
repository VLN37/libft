#include "libft.h"
#include <stdio.h>

static int	istrimmed(char c, char const *set)
{
	while(*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static void setvariables(int *size, int *start, char const *s1, char const *set)
{
	int	i;

	i = 0;
	*size = ft_strlen((char *)s1);
	printf("%d\n", *size);
	while(istrimmed(s1[*size - 1], set))
	{
		*size -= 1;
		printf("%d\n", *size);
	}
	while(istrimmed(s1[i], set))
	{
		*size -= 1;
		i++;
	}
	*start = i;
}


char *ft_strtrim(char const *s1, char const *set)
{
	int	size;
	int start;
	char *res;
	int i;

	i = 0;
	setvariables(&size, &start, s1, set);
	res = (char *)malloc(sizeof(char) * size + 1);
	while(i < size)
	{
		res[i] = s1[start + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

int	main(void)
{
	char const str1[] = "1212print this!1212";
	char const rem[] = "12";
	char *result;

	result = ft_strtrim(str1, rem);
	printf("%s\n", result);
	free(result);
}

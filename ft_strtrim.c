#include "libft.h"

int	istrimmed(char c, char const *set)
{
	while(*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

void setvariables(int *size, int *start, char const *s1, char const *set)
{
	int	i;

	i = 0;
	*size = ft_strlen((char *)s1);
	while(istrimmed(s1[*size - 1], set))
	{
		*size -= 1;
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

#include "libft.h"
#include <stdio.h>

char **ft_split(char const *s, char c);

int	main(void)
{
	//char str1[] = "String 1$String 2$String 3$String 4";
	char str2[] = "String 1$String 2$String 3$String 4$";
	char delim = '$';
	char **res;
	int	i;

	printf("\nTest 0---------------------------------\n");
	i = 0;
	res = ft_split(str2, delim);
	while (res[i])
	{
		printf("string: %s\n", res[i]);
		i++;
	}


	printf("\nTest 1---------------------------------\n");
	i = 0;
	res = ft_split("          ", ' ');
	while (res[i])
	{
		printf("string: %s\n", res[i]);
		i++;
	}


	printf("\nTest 2---------------------------------\n");
	i = 0;
	res = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ');
	while (res[i])
	{
		printf("string: %s\n", res[i]);
		i++;
	}


	printf("\nTest 3---------------------------------\n");
	i = 0;
	res = ft_split("   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ", ' ');
	while (res[i])
	{
		printf("string: %s\n", res[i]);
		i++;
	}


	printf("\nTest 4---------------------------------\n");
	i = 0;
	res = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'i');
	while (res[i])
	{
		printf("string: %s\n", res[i]);
		i++;
	}


	printf("\nTest 5---------------------------------\n");
	i = 0;
	res = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'z');
	while (res[i])
	{
		printf("string: %s\n", res[i]);
		i++;
	}


	printf("\nTest 6---------------------------------\n");
	i = 0;
	res = ft_split("", 'z');
	while (res[i])
	{
		printf("string: %s\n", res[i]);
		i++;
	}

}

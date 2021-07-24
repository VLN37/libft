#include <stdio.h>

int	ft_strlen2(char *str);
char *ft_strcpy(char *src, char *dest);
char *ft_strjoin(int size, char **strs, char *sep);
int	ft_strlen(char **str, int size);

int	main(void)
{
	char *str[] ={"thiiis", "issss", "FIREEEeee"};
	char *sep = "chakalaka";
	char *dest = ft_strjoin(3, str, sep);
	printf("%d\n", ft_strlen(str, 3));
	printf("%s\n%p\n", ft_strjoin(3, str, sep));

}

//has to be 38 +2 (sep) +1 (\0s)

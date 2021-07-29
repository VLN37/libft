#include "../../libft.h"
#include <stdio.h>

char toupperr(unsigned int i, char c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return(c);
}

// void ft_striteri(char *s, void(*f)(unsigned int, char *))
// {
// 	int	i;

// 	i = 0;
// 	while (s[i])
// 	{
// 		f(i, &s[i]);
// 		i++;
// 	}
// }

int	main(void)
{
	char (*f)(unsigned int, char);
	f = &toupperr;
	const char *str = "baller";
	printf("%s\n", ft_strmapi(str, f));
}

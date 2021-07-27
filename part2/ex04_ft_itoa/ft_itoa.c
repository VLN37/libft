#include "libft.h"

char *putnbr(int n, )
{

}

char *ft_itoa(int n)
{
	int	sign;
	char *str;
	int	i;

	i = -1;
	if (n < 0)
		sign = -1;
	else
		sign = 1;
	str = (char *)malloc(sizeof(char ) * 12);
	if (!str)
		return (NULL);
	while (i++ < 12)
		str[i] = '\0';


}

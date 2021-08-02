#include "libft.h"
#include <stdio.h>

static void	setvariables(int nbr, int *sign, int *size)
{
	int	i;

	*size = 0;
	i = 0;
	if (nbr < 0)
	{
		i++;
		*sign *= -1;
		nbr *= -1;
	}
	if (nbr == 0)
		*size += 1;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		i++;
	}
	*size = *size + i + 1;
}

static void	putnbr(int nbr, char *res, int *sign)
{
	int	i;

	i = 0;
	if (nbr == -2147483648)
	{
		res[i++] = '8';
		nbr = nbr / 10;
	}
	if (nbr == 0)
		res[i++] = '0';
	if (nbr < 0)
		nbr *= -1;
	while (nbr != 0)
	{
		res[i] = (nbr % 10) + 48;
		i++;
		nbr = nbr / 10;
	}
	if (*sign == -1)
		res[i] = '-';
}

static void	reverse_string(char *tab)
{
	int	i;
	int	buffer;
	int	size;

	size = ft_strlen(tab);
	i = 0;
	while (i < size / 2)
	{
		buffer = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = buffer;
		i++;
	}
}

/**
 * @brief Receives an int number and returns it as a freshly allocated string
 * @param nbr the number to be converted
 * @return char * - the address of the allocated string
 */
char	*ft_itoa(int nbr)
{
	int		size;
	int		sign;
	char	*res;

	sign = 1;
	setvariables(nbr, &sign, &size);
	res = (char *)ft_calloc(size, sizeof(char));
	if (!res)
		return (NULL);
	putnbr(nbr, res, &sign);
	reverse_string(res);
	return (res);
}

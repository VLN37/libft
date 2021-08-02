#include "libft.h"

/**
 * @brief applies the function F to every character of the string S
 */
void	ft_striteri(char *s, void(*f)(unsigned int, char *))
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

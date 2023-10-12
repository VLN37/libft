/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strerase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 20:52:21 by jofelipe          #+#    #+#             */
/*   Updated: 2023/10/12 00:55:09 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	istrimmed(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (true);
		set++;
	}
	return (false);
}

static int	strsize(char *str, char *set)
{
	int	i;

	i = 0;
	while (*str)
	{
		if (!istrimmed(*str++, set))
			i++;
	}
	return (i);
}

/**
 * @brief removes SET from the str string, returns a freshly allocated string
 * with the remaining characters
 *
 * @param str the string to be trimmed
 * @param set the set of characters to remove
 * @return char* the freshly allocated string, the previous string must be freed
 */
char	*ft_strerase(char *str, char *set)
{
	size_t	size;
	char	*res;

	if (!str)
		return (NULL);
	size = strsize(str, set);
	res = (char *)malloc(sizeof(char) * size + 1);
	while (*str)
	{
		if (!istrimmed(*str, set))
			*res++ = *str++;
		else
			str++;
	}
	*res = '\0';
	return (res - size);
}

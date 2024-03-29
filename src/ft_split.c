/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 10:15:30 by jofelipe          #+#    #+#             */
/*   Updated: 2023/10/17 12:36:23 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	strcount(char const *s, char c, size_t *l)
{
	int	i;

	*l = 0;
	i = 0;
	if (c == 0)
		return (1);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s && *s != c)
		{
			while (*s && *s != c)
				s++;
			i++;
		}
	}
	return (i);
}

static int	strsize(const char *s, char c)
{
	int	i;

	i = 0;
	while (*s && *s != c)
	{
		s++;
		i++;
	}
	return (i);
}

/**
 * @brief Receives a string and returns a freshly allocated array of strings.
 * The string is cut every time C is found, removing it from the string.
 *
 * @param s the string to be separated
 * @param c the delimiter character
 * @return char** - freshly allocated array of strings that needs to be
 * freed later
 */
char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	size;
	size_t	i;

	if (!s)
		return (NULL);
	res = (char **)malloc(sizeof(char *) * (strcount(s, c, &i) + 1));
	if (!res)
		return (NULL);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			size = strsize(s, c);
			res[i] = malloc(sizeof(char) * (size + 1));
			ft_strlcpy(res[i++], s, size + 1);
			s += size;
		}
	}
	res[i] = NULL;
	return (res);
}

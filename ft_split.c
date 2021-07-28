/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 10:15:30 by jofelipe          #+#    #+#             */
/*   Updated: 2021/07/27 20:28:33 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	strcount(char const *s, char c)
{
	int	i;

	i = 1;
	while (*s)
	{
		if (*s == c && *(s + 1) && *(s + 1) != c)
			i++;
		if (*s == c && !*(s + 1) && i == 1)
			return (0);
		s++;
	}
	if (i > 0)
		i++;
	return (i);
}

static int	strsize(char *s, char c)
{
	int	i;

	i = 0;
	while (*s != c && *s)
	{
		s++;
		i++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	int		strctr;
	int		i;
	char	**res;

	i = 0;
	if (!s)
		return (NULL);
	strctr = strcount(s, c);
	res = (char **)malloc(sizeof(char *) * strctr + 1);
	if (!res)
		return (NULL);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			res[i] = ft_calloc(strsize((char *)s, c) + 1, sizeof(char));
		if (!res[i])
		{
			while (i >= 0)
				free(res[i--]);
			return (NULL);
		}
		ft_strlcpy(res[i], s, strsize((char *)s, c) + 1);
		i++;
		while (*s && *s != c)
			s++;
		while (*s == c)
			s++;
	}
	res[i] = NULL;
	return (res);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 10:21:45 by jofelipe          #+#    #+#             */
/*   Updated: 2023/10/16 20:08:25 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief trims SET from the start and end of the string s1, returns a freshly
allocated string with the remaining characters
 *
 * @param s1 the string to be trimmed
 * @param set the set of characters that should be removed
 * @return char* the address of the freshly allocated string
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		size;
	char		*res;
	char		*end;

	if (!s1)
		return (NULL);
	end = (char *)s1 + ft_strlen(s1) - 1;
	while (ft_strchr(set, *s1) && *s1)
		s1++;
	while (ft_strchr(set, *end) && end > s1)
		end--;
	size = end - s1 + 2;
	res = malloc(size * sizeof(char));
	if (!res)
		return (NULL);
	ft_strlcpy(res, s1, size);
	return (res);
}

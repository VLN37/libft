/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 10:21:28 by jofelipe          #+#    #+#             */
/*   Updated: 2023/10/17 13:24:12 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//returns the starting address of the first match of TO_FIND in STR, NULL if
//none
char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	needle_len;

	i = -1;
	needle_len = ft_strlen(needle);
	if (!*needle)
		return ((char *)haystack);
	while (++i + needle_len <= n && haystack[i])
		if (!ft_strncmp(haystack + i, needle, needle_len))
			return ((char *)haystack + i);
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 10:17:47 by jofelipe          #+#    #+#             */
/*   Updated: 2023/10/16 12:01:57 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief allocates a new string and returns the concatenation of the two
 * arguments
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	size;

	if (!s1 || !s2)
		return (NULL);
	size = (ft_strlen(s1) + ft_strlen(s2)) + 1;
	res = (char *)malloc(sizeof(char) * size);
	if (!res)
		return (NULL);
	res += ft_strlcpy(res, s1, size);
	res += ft_strlcpy(res, s2, size);
	return (res - size + 1);
}

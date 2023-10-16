/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 01:34:40 by jofelipe          #+#    #+#             */
/*   Updated: 2023/10/16 12:12:26 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Returns a freshly allocated string starting from the Nth element of
 * S and with at most len bytes. If parameters are invalid, the string will be
 * empty.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*adrs;
	size_t	result_len;
	size_t	src_len;

	if (!s)
		return (NULL);
	src_len = ft_strlen(s);
	if (start > src_len)
		return (ft_strdup(""));
	result_len = src_len - start;
	if (result_len > len)
		result_len = len;
	adrs = malloc(result_len + 1);
	if (!adrs)
		return (NULL);
	ft_strlcpy(adrs, &s[start], result_len + 1);
	return (adrs);
}

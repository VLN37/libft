/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 11:26:42 by jofelipe          #+#    #+#             */
/*   Updated: 2023/10/16 13:40:58 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copies SIZE bytes of SRC into DEST, guaranteeing to NULL terminate
 * the result, as long as SIZE is at least 1.
 * @param dest the destination string, it needs to have enough space to receive
 * SIZE bytes
 * @param src the string to be copied from
 * @param size the maximum amount of bytes that should be copied
 * @return size_t - the length of SRC
 */
size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	srclen;

	srclen = ft_strlen(src);
	if (srclen + 1 < size)
		size = srclen + 1;
	if (size)
	{
		ft_memcpy(dest, src, size - 1);
		dest[size - 1] = '\0';
	}
	return (srclen);
}

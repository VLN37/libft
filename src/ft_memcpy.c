/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 10:11:17 by jofelipe          #+#    #+#             */
/*   Updated: 2023/10/16 13:39:12 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief copies N bytes of memory from SRC into DEST
 */
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	void	*ptr;

	if (!dest && !src)
		return (NULL);
	ptr = dest;
	while (n > 8)
	{
		*(uint64_t *)dest = *(uint64_t const *)src;
		dest += 8;
		src += 8;
		n -= 8;
	}
	while (n-- > 0)
		*(uint8_t *)dest++ = *(uint8_t *)src++;
	return (ptr);
}

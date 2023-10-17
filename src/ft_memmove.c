/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 10:11:43 by jofelipe          #+#    #+#             */
/*   Updated: 2023/10/17 12:39:22 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief copies N bytes of memory from SRC into  DEST with treatment for
 * possibly overlapping addresses
 */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*ptr;

	ptr = dest;
	if (src < dest && src + n > dest)
	{
		src = src + n - 1;
		dest = dest + n - 1;
		while (n > 8)
		{
			src -= 8;
			dest -= 8;
			n -= 8;
			*(uint64_t *)dest = *(uint64_t const *)src;
		}
		while (n-- > 0)
			*(char *)dest-- = *(char *)src--;
	}
	else
		return (ft_memcpy(dest, src, n));
	return (ptr);
}

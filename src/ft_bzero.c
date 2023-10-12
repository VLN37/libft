/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 10:05:30 by jofelipe          #+#    #+#             */
/*   Updated: 2023/10/11 23:31:17 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief receives an address and fills it with NULL values
 *
 * @param str the starting address
 * @param len the amount of bytes to be written
 */
void	ft_bzero(void *ptr, size_t len)
{
	uint64_t	*ptr64;
	char		*ptr4;

	ptr64 = (uint64_t *)ptr;
	while (len >= 8)
	{
		*ptr64 = 0;
		len -= 8;
		++ptr64;
	}
	ptr4 = (char *)ptr64;
	while (len--)
	{
		*ptr4 = 0;
		++ptr4;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 10:05:30 by jofelipe          #+#    #+#             */
/*   Updated: 2023/10/16 20:10:56 by jofelipe         ###   ########.fr       */
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
	ft_memset(ptr, 0, len);
}

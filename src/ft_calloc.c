/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 10:06:02 by jofelipe          #+#    #+#             */
/*   Updated: 2023/10/11 23:31:03 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Initializes a block of memory of 'nbr' elements of 'size' bytes,fills
 * all positions with null values. An aditional byte for the terminating null
 * byte should be included, if necessary.
 *
 * @param nbr the number of elements
 * @param size the size of each element
 * @return void * - the address of the allocated block of memory
 */
void	*ft_calloc(size_t nbr, size_t size)
{
	void	*ptr;

	if (size && nbr > (size_t) -1 / size)
	{
		errno = ENOMEM;
		return (NULL);
	}
	ptr = malloc(nbr * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, nbr * size);
	return (ptr);
}

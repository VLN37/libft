/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 10:06:02 by jofelipe          #+#    #+#             */
/*   Updated: 2021/07/27 10:28:18 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//receives a string and fills all positions with NULL
void	*ft_calloc(size_t nbr, size_t size)
{
	size_t			maxnbr;
	unsigned int	bytes;
	void			*ptr;
	void			*tmp;

	maxnbr = 4294967295 / size;
	if (nbr > maxnbr || nbr == 0 || size == 0)
		return (NULL);
	ptr = malloc(nbr * size);
	if (ptr == NULL)
		return (NULL);
	tmp = ptr;
	bytes = nbr * size;
	while (bytes > 0)
	{
		*(char *)ptr = '\0';
		ptr++;
		bytes--;
	}
	return (tmp);
}

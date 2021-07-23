/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 04:45:30 by jofelipe          #+#    #+#             */
/*   Updated: 2021/06/16 09:17:39 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (size == 0)
		return (ft_strlen(src) + i);
	while (dest[i] && i < size)
		i++;
	j = i;
	while (src[j - i] && j < size - 1)
	{
		dest[j] = src[j - i];
		j++;
	}
	if (j < size)
		dest[j] = '\0';
	return (ft_strlen(src) + i);
}

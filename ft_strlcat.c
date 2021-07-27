/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 04:45:30 by jofelipe          #+#    #+#             */
/*   Updated: 2021/07/27 10:19:21 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//concatenates at most SIZE characters from SRC into DEST
size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

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

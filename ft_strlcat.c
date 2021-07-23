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
	unsigned int	finalsize;

	finalsize = ft_strlen(src) + ft_strlen(dest);
	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && j < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (size > 0)
		dest[i] = '\0';
	if (dest[i])
		return (size);
	else
		return (finalsize);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 10:05:30 by jofelipe          #+#    #+#             */
/*   Updated: 2021/07/27 12:14:50 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//receives a string and fills it with NULL values
void	ft_bzero(void *str, size_t len)
{
	while (len-- > 0)
	{
		*(char *)str = 0;
		str++;
	}
}

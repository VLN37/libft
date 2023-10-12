/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 10:09:16 by jofelipe          #+#    #+#             */
/*   Updated: 2023/10/12 00:54:16 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//returns 1 if C is in the ASCII table, 0 otherwise
int	ft_isascii(int c)
{
	if (c < 0 || c > 127)
		return (false);
	return (true);
}

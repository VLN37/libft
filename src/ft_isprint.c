/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 10:09:26 by jofelipe          #+#    #+#             */
/*   Updated: 2023/10/12 00:54:25 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Returns 1 if C is printable, 0 otherwise
int	ft_isprint(int c)
{
	if (c < 32 || c > 126)
		return (false);
	return (true);
}

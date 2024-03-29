/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 10:09:21 by jofelipe          #+#    #+#             */
/*   Updated: 2023/10/12 00:53:55 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Returns 1 if C is numeric, 0 otherwise
int	ft_isdigit(int c)
{
	if (c < '0' || c > '9')
		return (false);
	return (true);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 10:07:47 by jofelipe          #+#    #+#             */
/*   Updated: 2023/10/12 00:53:31 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//returns 1 if C is alphanumeric, 0 otherwise
int	ft_isalnum(int c)
{
	if ((!ft_isalpha(c)) && (!ft_isdigit(c)))
		return (false);
	return (true);
}

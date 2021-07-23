/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 03:05:05 by jofelipe          #+#    #+#             */
/*   Updated: 2021/06/17 16:33:45 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	validation(char *str, int *ptrsign, int *ptri)
{
	int	i;

	i = 0;
	while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			*ptrsign *= -1;
		i++;
	}
	*ptri = i;
	if (str[i] < '0' || str[i] > '9')
		return (0);
	return (1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;
	int	*ptri;
	int	*ptrsign;

	i = 0;
	sign = 1;
	result = 0;
	ptri = &i;
	ptrsign = &sign;
	if (!validation(str, ptrsign, ptri))
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (result);
		else
			result = (result * 10) + (str[i] - '0') * sign;
		i++;
	}
	return (result);
}

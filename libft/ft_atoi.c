/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 19:24:26 by osamoile          #+#    #+#             */
/*   Updated: 2018/03/21 19:26:21 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		is_separator(char c)
{
	if (c == ' ' || c == '\n' || c == '\t' ||
			c == '\r' || c == '\v' || c == '\f')
		return (1);
	else
		return (0);
}

static int		is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int				ft_atoi(const char *str)
{
	int		i;
	int		sign;
	int		res;
	int		start;

	sign = 1;
	res = 0;
	i = 0;
	while (is_separator(str[i]))
		i++;
	if (str[i] == '-')
		sign *= -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	start = i;
	while (is_digit(str[i]))
	{
		res = res * 10 + (str[i] - '0');
		i++;
		if (i - start >= 20)
			return sign == -1 ? 0 : -1;
	}
	return (sign * res);
}

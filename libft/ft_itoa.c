/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 14:30:02 by osamoile          #+#    #+#             */
/*   Updated: 2018/03/27 14:30:04 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		fill(int number, char *a, int len)
{
	if (number == 0)
		a[0] = '0';
	a[len--] = '\0';
	while (number > 0)
	{
		a[len] = number % 10 + '0';
		number /= 10;
		len--;
	}
}

char			*ft_itoa(int number)
{
	char	*a;
	int		sign;
	int		len;

	sign = 0;
	if (number == -2147483648)
		return (ft_strdup("-2147483648"));
	if (number < 0)
	{
		number *= -1;
		sign = 1;
	}
	len = ft_countdigits(number);
	a = (char*)malloc(sizeof(char) * (len + sign + 1));
	if (!a)
		return (0);
	if (sign == 1)
	{
		a[0] = '-';
		len++;
	}
	fill(number, a, len);
	return (a);
}

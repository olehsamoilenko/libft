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

#include <stdlib.h>
#include <stdio.h>

static int		count_digits(int n)
{
	int count;

	if (n == 0)
		return (1);
	count = 0;
	while (n > 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

static char		*min_value(void)
{
	char *a;

	a = (char*)malloc(sizeof(char) * 12);
	a[0] = '-';
	a[1] = '2';
	a[2] = '1';
	a[3] = '4';
	a[4] = '7';
	a[5] = '4';
	a[6] = '8';
	a[7] = '3';
	a[8] = '6';
	a[9] = '4';
	a[10] = '8';
	a[11] = '\0';
	return (a);
}

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
		return (min_value());
	if (number < 0)
	{
		number *= -1;
		sign = 1;
	}
	len = count_digits(number);
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

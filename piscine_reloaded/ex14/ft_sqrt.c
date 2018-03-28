/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 20:04:24 by osamoile          #+#    #+#             */
/*   Updated: 2018/03/19 20:12:16 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_sqrt(int nb)
{
	int l;
	int r;
	int mid;

	l = 0;
	r = nb;
	if (nb == 1)
		return (1);
	while (r - l > 1)
	{
		mid = (l + r) / 2;
		if (mid * mid == nb)
			return (mid);
		if (mid * mid < nb && mid < 46340)
			l = mid;
		else
			r = mid;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 12:39:02 by osamoile          #+#    #+#             */
/*   Updated: 2018/03/20 12:45:36 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	*r;
	int	i;
	int	cur;

	if (min < max)
	{
		r = (int*)malloc(sizeof(int) * (max - min));
		cur = min;
		i = 0;
		while (i < max - min)
		{
			r[i] = cur;
			cur++;
			i++;
		}
		return (r);
	}
	else
		return (0);
}

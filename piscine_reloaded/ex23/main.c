/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 13:13:02 by osamoile          #+#    #+#             */
/*   Updated: 2018/03/20 13:13:41 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"
#include <stdio.h>

void	set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

int		main(void)
{
	t_point point;
	set_point(&point);
	printf("%i\n", point.x);
	printf("%i\n", point.y);
	return (0);
}

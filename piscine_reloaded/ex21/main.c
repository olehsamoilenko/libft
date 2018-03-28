/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 12:45:41 by osamoile          #+#    #+#             */
/*   Updated: 2018/03/20 12:48:46 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int *r;
	int i;
	int min = 16;
	int max = 16;
	r = ft_range(min, max);
	i = 0;
	while (i < max - min)
	{
		printf("%i\n", r[i]);
		i++;
	}
	return (0);
}

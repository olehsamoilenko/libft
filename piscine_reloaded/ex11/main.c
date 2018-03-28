/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 19:23:13 by osamoile          #+#    #+#             */
/*   Updated: 2018/03/19 19:23:15 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
{
	int a;
	int b;
	int c;
	int d;

	a = 5;
	b = 2;
	ft_div_mod(a, b, &c, &d);
	printf("%i\n", c);
	printf("%i\n", d);
	return (0);
}

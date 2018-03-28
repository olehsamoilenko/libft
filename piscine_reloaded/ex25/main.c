/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 14:33:53 by osamoile          #+#    #+#             */
/*   Updated: 2018/03/20 14:35:09 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_foreach(int *tab, int length, void (*f)(int));

void	print(int i)
{
	printf("%i\n", i);
}

int		main(void)
{
	int tab[3] = { 1, 3, 5 };
	ft_foreach(tab, 3, &print);
	return (0);
}

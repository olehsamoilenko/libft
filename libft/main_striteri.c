/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_striteri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 14:32:04 by osamoile          #+#    #+#             */
/*   Updated: 2018/03/27 14:34:20 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	f(unsigned int a, char *c)
{
	*c = a;
}

int		main(void)
{
	char a[] = "oleh";
	ft_striteri(a, &f);
	printf("%s\n", a);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 16:24:27 by osamoile          #+#    #+#             */
/*   Updated: 2018/03/21 17:21:09 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

int		main(void)
{
	char	*a;
	char	*b;
	int		c;
	size_t	len;

	c = 42;
	len = 3;
	a = ft_memcpy(b, c, len);
	printf("my       | a: %s b: %s\n", a, b);
	a = memcpy(b, c, len);
	printf("original | a: %s b: %s\n", a, b);
	return (0);
}

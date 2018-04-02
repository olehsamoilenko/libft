/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 16:24:27 by osamoile          #+#    #+#             */
/*   Updated: 2018/03/21 17:21:09 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int		main(void)
{
	char	*a;
	char	*b;
	size_t	n;

	a = "";
	b = "a";
	n = 1;
	printf("my      : %i\n", ft_memcmp(a, b, n));
	printf("original: %i\n", memcmp(a, b, n));
	return (0);
}

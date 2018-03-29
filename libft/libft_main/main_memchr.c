/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 18:01:05 by osamoile          #+#    #+#             */
/*   Updated: 2018/03/21 18:07:57 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int		main(void)
{
	char	*a;
	int		c;
	size_t	n;

	a = "abcdef";
	c = 999;
	n = 6;
	printf("my:       %s\n", ft_memchr(a, c, n));
	printf("original: %s\n", memchr(a, c, n));
}

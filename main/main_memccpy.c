/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memccpy.c                                     :+:      :+:    :+:   */
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
	char	a[] = "tes*0t basic du memccpy !";
	char	*b1;
	char	*b2;
	int		c;
	size_t	len;

	b1 = malloc(sizeof(char) * 20);
	b2 = malloc(sizeof(char) * 20);
	c = 'l';
	len = 10;
	printf("my       | %s | b: %s\n", ft_memccpy(b1, a, c, len), b1);
	printf("original | %s | b: %s\n", memccpy(b2, a, c, len), b2);
	return (0);
}

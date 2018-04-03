/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memset.c                                      :+:      :+:    :+:   */
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
	char	b[20] = "ab*c";
	char	c;
	int		n;
	
	n = 2;
	c = '*';
	ft_memset(b, c, n);
	printf("my      : %s\n", b);
	memset(b, c, n);
	printf("original: %s\n", b);
	return (0);
}

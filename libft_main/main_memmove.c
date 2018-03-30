/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memmove.c                                     :+:      :+:    :+:   */
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
	char	a1[] = "1234567890";
	char	a2[] = "1234567890";
	char	*b1;
	char	*b2;
	size_t	len;

	len = 4;
	b1 = malloc(sizeof(char) * 20);
	b2 = malloc(sizeof(char) * 20);
	//1
	printf("my       | %s\n", ft_memmove(&a1[4], &a1[3], len));
	printf("original | %s\n", memmove(&a2[4], &a2[3], len));
	//2
	//printf("my       | %s %s\n", ft_memmove(b1, a1, len), b1);
	//printf("original | %s %s\n", memmove(b2, a2, len), b2);
	return (0);
}

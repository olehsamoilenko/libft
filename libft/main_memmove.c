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

#include <string.h>
#include <stdio.h>
#include "libft.h"

int		main(void)
{
	char	a1[] = "1234567890";
	char	a2[] = "1234567890";
	char	b1[4];
	char	b2[4];
	size_t	len;

	len = 10;
	//printf("my       | %s\n", ft_memmove(&a1[4], &a1[3], len));
	//printf("original | %s\n", memmove(&a2[4], &a2[3], len));

	printf("my       | %s\n", ft_memmove(b1, a1, len));
	printf("original | %s\n", memmove(b2, a2, len));
	return (0);
}

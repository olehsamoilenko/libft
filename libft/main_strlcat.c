/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 18:01:05 by osamoile          #+#    #+#             */
/*   Updated: 2018/03/21 18:07:57 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int		main(void)
{
	char	a1[20] = "oleh";
	char	a2[20] = "oleh";
	char	*b;
	int		c;

	b = "abc";
	c = 12;
	printf("my:       %zu %s\n", ft_strlcat(a1, b, c), a1);
	printf("original: %zu %s\n", strlcat(a2, b, c), a2);
}

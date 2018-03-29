/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strchr.c                                      :+:      :+:    :+:   */
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

	a = "abc";
	c = 'b';
	printf("my:       %s\n", ft_strchr(a, c));
	printf("original: %s\n", strchr(a, c));
}

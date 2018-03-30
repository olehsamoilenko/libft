/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bzero.c                                       :+:      :+:    :+:   */
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
	char	a[] = "oleh";
	char	b[] = "oleh";
	size_t	n;

	n = 4;
	ft_bzero(a, n);
	printf("my:       %s\n", a);
	bzero(b, n);
	printf("original: %s\n", b);
	return (0);
}

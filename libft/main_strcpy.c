/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strcpy.c                                      :+:      :+:    :+:   */
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
	char	*a1 = "ab";
	char	*a2 = "ab";
	char	b[] = "abcdefghijkl";

	a1 = malloc(sizeof(char) * 5);
	a2 = malloc(sizeof(char) * 5);
	printf("my:       %s\n", ft_strcpy(a1, b));
	printf("original: %s\n", strcpy(a2, b));
}

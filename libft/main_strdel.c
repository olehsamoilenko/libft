/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 14:32:04 by osamoile          #+#    #+#             */
/*   Updated: 2018/03/27 14:34:20 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int		main(void)
{
	char *a;
	a = (char*)malloc(sizeof(char) * 10);
	ft_strdel(&a);
	system("leaks a.out");
	return (0);
}

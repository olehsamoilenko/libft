/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strmap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 14:32:04 by osamoile          #+#    #+#             */
/*   Updated: 2018/03/27 14:34:20 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	f(char c)
{
	c++;
	return(c);
}

int		main(void)
{
	char s[] = "oleh";
	char *a;
	a = ft_strmap(s, &f);
	printf("%s\n", a);
	return (0);
}

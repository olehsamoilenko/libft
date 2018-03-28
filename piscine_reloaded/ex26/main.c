/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 14:47:33 by osamoile          #+#    #+#             */
/*   Updated: 2018/03/20 14:50:50 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_count_if(char **tab, int (*f)(char*));

int		oleh(char *s)
{
	if (s[0] == 'o')
		return (1);
	else
		return (0);
}

int		main(void)
{
	char **tab;
	tab[0] = "oleh";
	tab[1] = "anton";
	tab[2] = "oleh";
	tab[3] = "";
	printf("%i\n", ft_count_if(tab, &oleh));
	return (0);
}

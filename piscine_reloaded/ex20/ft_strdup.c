/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 11:52:39 by osamoile          #+#    #+#             */
/*   Updated: 2018/03/20 11:57:22 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		len(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*n;
	int		i;

	if (src == 0)
		return (0);
	n = (char*)malloc(sizeof(char) * (len(src) + 1));
	i = 0;
	while (i < len(src))
	{
		n[i] = src[i];
		i++;
	}
	n[i] = '\0';
	return (n);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 14:30:02 by osamoile          #+#    #+#             */
/*   Updated: 2018/03/27 14:30:04 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		len(const char *s)
{
	int i;

	if (s == 0)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
}

char			*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*a;

	if (!s1 && !s2)
		return (0);
	i = len(s1);
	j = len(s2);
	a = (char*)malloc(sizeof(char) * (i + j + 1));
	if (!a)
		return (0);
	i = -1;
	if (s1)
		while (s1[++i])
			a[i] = s1[i];
	j = -1;
	if (s2)
		while (s2[++j])
			a[i + j] = s2[j];
	a[i + j] = '\0';
	return (a);
}

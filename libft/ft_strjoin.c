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

#include <string.h>
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*a;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (0);
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	a = (char*)malloc(sizeof(char) * (i + j + 1));
	if (!a)
		return (0);
	i = -1;
	while (s1[++i])
		a[i] = s1[i];
	j = -1;
	while (s2[++j])
		a[i + j] = s2[j];
	a[i + j] = '\0';
	return (a);
}

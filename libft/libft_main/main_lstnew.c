/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_lstnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 08:30:00 by osamoile          #+#    #+#             */
/*   Updated: 2018/03/28 08:30:30 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int		main(void)
{
	t_list	*lst;

	lst = ft_lstnew("oleh", 5);
	printf("%s %zu\n", lst->content, lst->content_size);
	return (0);
}

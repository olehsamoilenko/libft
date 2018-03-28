/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 19:26:10 by osamoile          #+#    #+#             */
/*   Updated: 2018/03/19 19:49:33 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int res;

	if (nb < 0 || nb >= 13)
		return (0);
	res = 1;
	while (nb > 0)
	{
		res *= nb;
		nb--;
	}
	if (res == 0)
		return (1);
	return (res);
}

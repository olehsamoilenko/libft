/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 19:30:06 by osamoile          #+#    #+#             */
/*   Updated: 2018/03/19 19:48:08 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	printf("%i\n", ft_iterative_factorial(-1));
	printf("%i\n", ft_iterative_factorial(0));
	printf("%i\n", ft_iterative_factorial(1));
	printf("%i\n", ft_iterative_factorial(2));
	printf("%i\n", ft_iterative_factorial(3));
	printf("%i\n", ft_iterative_factorial(12));
	printf("%i\n", ft_iterative_factorial(13));
}

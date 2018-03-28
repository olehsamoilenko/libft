/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 19:30:06 by osamoile          #+#    #+#             */
/*   Updated: 2018/03/19 19:44:23 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	main(void)
{
	printf("%i\n", ft_recursive_factorial(-1));
	printf("%i\n", ft_recursive_factorial(0));
	printf("%i\n", ft_recursive_factorial(1));
	printf("%i\n", ft_recursive_factorial(2));
	printf("%i\n", ft_recursive_factorial(3));
	printf("%i\n", ft_recursive_factorial(12));
	printf("%i\n", ft_recursive_factorial(13));
}

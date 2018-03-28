/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 20:45:19 by osamoile          #+#    #+#             */
/*   Updated: 2018/03/19 20:45:20 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int args, char **argv)
{
	int i;

	if (args > 1)
	{
		i = 1;
		while (i < args)
		{
			ft_putstr(argv[i]);
			ft_putchar('\n');
			i++;
		}
	}
}

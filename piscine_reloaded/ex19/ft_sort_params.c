/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 11:37:28 by osamoile          #+#    #+#             */
/*   Updated: 2018/03/20 11:37:29 by osamoile         ###   ########.fr       */
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

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_print_params(int args, char **argv)
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

int		main(int args, char **argv)
{
	int		i;
	int		j;
	char	*buf;

	i = 1;
	j = 1;
	while (i < args)
	{
		j = i;
		while (j < args)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				buf = argv[i];
				argv[i] = argv[j];
				argv[j] = buf;
			}
			j++;
		}
		i++;
	}
	ft_print_params(args, argv);
	return (0);
}

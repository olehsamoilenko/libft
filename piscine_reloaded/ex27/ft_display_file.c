/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 14:58:01 by osamoile          #+#    #+#             */
/*   Updated: 2018/03/20 15:04:06 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#define BUF_SIZE 1

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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
	int		fd;
	char	buf[BUF_SIZE];

	if (args == 2)
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
		{
			ft_putstr("File name missing.\n");
			return (0);
		}
		while (read(fd, buf, BUF_SIZE))
			ft_putchar(buf[0]);
	}
	else
	{
		if (args == 1)
			ft_putstr("File name missing.\n");
		else
			ft_putstr("Too many arguments.\n");
	}
	return (0);
}

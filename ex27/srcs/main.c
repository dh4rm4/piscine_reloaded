/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luccasim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 17:16:03 by luccasim          #+#    #+#             */
/*   Updated: 2016/12/21 08:24:43 by kboddez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_display_file.h"

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static void	ft_putstr(char *str)
{
	const char	*s;

	if (str)
	{
		s = str;
		while (*s)
		{
			ft_putchar(*s++);
		}
	}
}

static int	ft_puterror(char *str)
{
	if (str)
		write(2, str, ft_strlen(str));
	return (-1);
}

static int	ft_read_file(char *file)
{
	int		fd;
	int		ret;
	char	buf[1000];

	fd = open(file, O_RDONLY);
	ret = 1;
	if (fd < 0)
		return (ft_puterror("open(fd) failed!\n"));
	while (ret > 0)
	{
		ret = read(fd, buf, 1000 - 1);
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	if (close(fd) == -1)
		return (ft_puterror("Error close(fd)\n"));
	if (ret == -1)
		return (ft_puterror("Error reading file\n"));
	return (ret);
}

int			main(int ac, char **av)
{
	if (ac == 1)
		return (ft_puterror("File name missing.\n"));
	if (ac > 2)
		return (ft_puterror("Too many arguments.\n"));
	if (ac == 2)
		return (ft_read_file(*++av));
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboddez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 13:39:52 by kboddez           #+#    #+#             */
/*   Updated: 2016/12/21 09:20:09 by kboddez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

static void	ft_strendl(char *str)
{
	if (str)
	{
		while (*str != '\0')
		{
			ft_putchar(*str);
			str++;
		}
	}
	ft_putchar('\n');
}

int			ft_strcmp(char const *s1, char const *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		i++;
	}
	return ((((unsigned char*)s1)[i] - (((unsigned char*)s2)[i])));
}

int			main(int ac, char **av)
{
	int		x;
	char	*tmp;

	x = 1;
	if (ac > 1)
	{
		while (av[x + 1])
		{
			if (av[x + 1] && ft_strcmp(av[x], av[x + 1]) > 0)
			{
				tmp = av[x];
				av[x] = av[x + 1];
				av[x + 1] = tmp;
				x = 0;
			}
			++x;
		}
	}
	x = 1;
	while (av[x])
		ft_strendl(av[x++]);
	return (0);
}

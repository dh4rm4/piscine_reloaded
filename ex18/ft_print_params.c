/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboddez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 13:36:40 by kboddez           #+#    #+#             */
/*   Updated: 2016/12/15 13:39:30 by kboddez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

int			main(int ac, char *av[])
{
	int	i;

	i = 1;
	if (ac > 1)
	{
		while (av[i])
		{
			while (*av[i])
			{
				ft_putchar(*av[i]);
				++av[i];
			}
			++i;
			ft_putchar('\n');
		}
	}
	return (0);
}

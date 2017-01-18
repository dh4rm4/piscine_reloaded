/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboddez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/21 08:56:53 by kboddez           #+#    #+#             */
/*   Updated: 2016/12/21 09:06:53 by kboddez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		rtr;
	int		i;

	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	rtr = 1;
	i = 1;
	while (i <= nb)
	{
		rtr *= i;
		i++;
	}
	return (rtr);
}

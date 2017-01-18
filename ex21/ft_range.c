/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboddez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/20 15:30:06 by kboddez           #+#    #+#             */
/*   Updated: 2016/12/21 08:49:50 by kboddez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*rtr;
	int		i;
	int		n;

	n = max - min;
	if (n < 1)
		return (NULL);
	rtr = (int *)malloc(sizeof(int) * n);
	i = -1;
	while (++i < n)
		rtr[i] = min + i;
	return (rtr);
}

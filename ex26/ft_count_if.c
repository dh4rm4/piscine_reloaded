/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboddez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/21 08:01:38 by kboddez           #+#    #+#             */
/*   Updated: 2016/12/21 08:03:57 by kboddez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int i;

	i = 0;
	if (tab)
	{
		while (*tab)
		{
			if (f(*tab++) == 1)
				++i;
		}
	}
	return (i);
}

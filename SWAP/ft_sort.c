/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeulliot <jeulliot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 17:53:14 by jeulliot          #+#    #+#             */
/*   Updated: 2022/03/29 19:22:17 by jeulliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_sort(t_data data)
{
	int	i;

	i = 0;
	if (data.b.size != 0)
		return (0);
	while (i < data.a.size - 1)
	{
		if (data.a.tab[i] > data.a.tab[i + 1])
			return (0);
		i ++;
	}
	return (1);
}

t_data	ft_sort(t_data data)
{	
	while (ft_is_sort(data) == 0)
	{
		//data = ft_algorithm1(data);
		data = ft_algorithm2(data);
	}
	return (data);
}

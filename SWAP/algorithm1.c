/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeulliot <jeulliot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 19:11:11 by jeulliot          #+#    #+#             */
/*   Updated: 2022/03/29 19:16:08 by jeulliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_search_min(t_data data)
{
	int	i;
	int	index;
	int	min;

	i = 1;
	index = 0;
	if (data.a.size != 0)
		min = data.a.tab[0];
	while (i < data.a.size)
	{
		if (data.a.tab[i] < min)
		{
			min = data.a.tab[i];
			index = i;
		}
		i ++;
	}
	return (index);
}

t_data	ft_algorithm1(t_data data)
{
	int	index;
	int	i;

	i = 0;
	if (data.a.size == 0)
	{
		while (data.b.size != 0)
			data = ft_pa(data);
		return (data);
	}	
	index = ft_search_min(data);
	while (i < index)
	{	
		ft_ra(data);
		i ++;
	}
	data = ft_pb(data);
	return (data);
}

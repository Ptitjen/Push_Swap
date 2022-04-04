/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeulliot <jeulliot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 19:11:18 by jeulliot          #+#    #+#             */
/*   Updated: 2022/04/04 12:16:26 by jeulliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_data	ft_need_rotate_only(t_data data)
{
	int	min;
	int	i;

	min = ft_search_min(data);
	i = 0;
	while (i < min - 1)
	{
		if (data.a.tab[i] > data.a.tab[i + 1])
			return (data);
		i ++;
	}
	i ++;
	while (i < data.a.size - 1)
	{
		if (data.a.tab[i] > data.a.tab[i + 1])
			return (data);
		i ++;
	}
	ft_move_min_to_the_top(data, min);
	return (data);
}

t_data	ft_algorithm_mini(t_data data)
{
	if (data.a.size == 2)
		data = ft_sa(data);
	if (data.a.size == 3)
	{
		if (ft_search_max_in_a(data) == 0)
			data = ft_ra(data);
		else if (ft_search_min(data) == 0)
		{
			data = ft_sa(data);
			data = ft_ra(data);
		}
		else if (ft_search_min(data) == 1 && ft_search_max_in_a(data) == 2)
			data = ft_sa(data);
		else if (ft_search_min(data) == 2 && ft_search_max_in_a(data) == 1)
			data = ft_rra(data);
		else if (ft_search_min(data) == 2 && ft_search_max_in_a(data) == 0)
		{
			data = ft_sa(data);
			data = ft_rra(data);
		}
	}
	return (data);
}

t_data	ft_algorithm_small(t_data data)
{
	int	index;

	if (data.a.size == 3 && ft_rest_of_a_is_sort(data) == 0)
	{
		data = ft_algorithm_mini(data);
		return (data);
	}
	if (data.a.size == 2 && ft_rest_of_a_is_sort(data) == 0)
	{
		data = ft_sa(data);
		return (data);
	}
	if (data.a.size == 1 || ft_rest_of_a_is_sort(data) == 1)
	{
		while (data.b.size != 0)
			data = ft_pa(data);
		return (data);
	}
	data = ft_need_rotate_only(data);
	index = ft_search_min(data);
	if (index != 0)
		data = ft_move_min_to_the_top(data, index);
	if (ft_rest_of_a_is_sort(data) == 0)
		data = ft_pb(data);
	return (data);
}

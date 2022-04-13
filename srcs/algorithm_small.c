/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_small.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeulliot <jeulliot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 10:21:57 by jeulliot          #+#    #+#             */
/*   Updated: 2022/04/13 09:41:48 by jeulliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_data	ft_algorithm_mini(t_data data)
{
	if (data.a.size == 2)
		data = ft_sa(data);
	if (data.a.size == 3)
	{
		data = ft_need_rotate_only(data);
		if (ft_rest_of_a_is_sort(data) == 1)
			return (data);
		if (ft_search_min(data) == 0)
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
	int	min;

	if (data.a.size == 4)
	{
		min = ft_search_min(data);
		data = ft_move_a_to_the_top (data, min);
		data = ft_pb(data);
		data = ft_algorithm_mini(data);
		data = ft_pa(data);
	}
	if (data.a.size == 5)
	{
		min = ft_search_min(data);
		data = ft_move_a_to_the_top (data, min);
		data = ft_pb(data);
		data = ft_algorithm_small(data);
		data = ft_pa(data);
	}
	return (data);
}

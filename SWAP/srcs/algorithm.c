/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeulliot <jeulliot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 19:11:18 by jeulliot          #+#    #+#             */
/*   Updated: 2022/04/01 15:57:19 by jeulliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_data	ft_algorithm_mini(t_data data) // taille < 4
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
	int	i;

	i = 0;
	if (data.a.size == 3 && ft_rest_of_a_is_sort(data) == 0)
	{
		data = ft_algorithm_mini(data);
		return (data);
	}
	if (data.a.size == 2 && ft_rest_of_a_is_sort(data) == 0)
		data = ft_sa(data);
	if (data.a.size == 1 || ft_rest_of_a_is_sort(data) == 1)
	{
		while (data.b.size != 0)
			data = ft_pa(data);
		return (data);
	}		
	index = ft_search_min(data);
	if (index <= data.a.size / 2) // remonte la valeur
	{
		while (i < index)
		{	
			ft_ra(data);
			i ++;
		}
	}
	else // remet la valeur en premier en passant par le bas
	{
		while (i < data.a.size - index)
		{	
			ft_rra(data);
			i ++;
		}
	}
	data = ft_pb(data);

	return (data);
}



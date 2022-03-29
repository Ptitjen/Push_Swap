/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeulliot <jeulliot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 19:11:18 by jeulliot          #+#    #+#             */
/*   Updated: 2022/03/29 19:21:24 by jeulliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_data	ft_algorithm2(t_data data)
{
	int	index;
	int	i;

	i = 0;
	if (data.a.size == 0 || ft_rest_of_a_is_sort(data) == 1)
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

int	ft_rest_of_a_is_sort(t_data data)
{
	int	i;

	i = 0;
	if (data.a.size != 0)
	{
		while (i < data.a.size - 1)
		{
			if (data.a.tab[i] > data.a.tab[i + 1])
				return (0);
			i ++;
		}
	}
	return (1);
}

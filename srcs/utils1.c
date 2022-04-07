/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeulliot <jeulliot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:09:10 by jeulliot          #+#    #+#             */
/*   Updated: 2022/04/06 17:11:50 by jeulliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_search_min_a(t_data data)
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

int	ft_search_min_b(t_data data)
{
	int	i;
	int	index;
	int	min;

	i = 1;
	index = 0;
	if (data.b.size != 0)
		min = data.b.tab[0];
	while (i < data.b.size)
	{
		if (data.b.tab[i] < min)
		{
			min = data.b.tab[i];
			index = i;
		}
		i ++;
	}
	return (index);
}

t_data ft_move_mins_to_the_top (t_data data, int index_a, int index_b)
{
	//utiliser pour faire du rr ou du rra
 	(void) index_a;
	(void) index_b;
	 return (data);
}

t_data	ft_move_min_b_to_the_top(t_data data, int index)
{
	int	i;

	i = 0;
	if (index <= data.b.size / 2)
	{
		while (i < index)
		{	
			ft_ra(data);
			i ++;
		}
	}
	else
	{
		while (i < data.b.size - index)
		{	
			ft_rra(data);
			i ++;
		}
	}
	return (data);
}

t_data	ft_move_min_a_to_the_top(t_data data, int index)
{
	int	i;

	i = 0;
	if (index <= data.a.size / 2)
	{
		while (i < index)
		{	
			ft_ra(data);
			i ++;
		}
	}
	else
	{
		while (i < data.a.size - index)
		{	
			ft_rra(data);
			i ++;
		}
	}
	return (data);
}



int	ft_search_max_in_a(t_data data)
{
	int	i;
	int	max;
	int	index;

	i = 1;
	index = 0;
	if (data.a.size != 0)
		max = data.a.tab[0];
	while (i < data.a.size)
	{
		if (data.a.tab[i] > max)
		{
			max = data.a.tab[i];
			index = i;
		}
		i ++;
	}
	return (index);
}

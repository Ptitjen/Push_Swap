/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeulliot <jeulliot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 19:11:18 by jeulliot          #+#    #+#             */
/*   Updated: 2022/04/12 10:33:24 by jeulliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include<stdio.h>

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
	if (data.a.tab[data.a.size - 1] > data.a.tab[0])
		return (data);
	ft_move_a_to_the_top(data, min);
	return (data);
}

int	ft_is_sup_than_b(t_data data)
{
	int	i;
	
	i = 0;
	while (i < data.b.size)
	{
		if (data.b.tab[i] > data.a.tab[0])
			return (0);
		i ++;
	}
	return (1);
}

int	ft_is_inf_than_b(t_data data)
{
	int	i;
	
	i = 0;
	while (i < data.b.size)
	{
		if (data.b.tab[i] < data.a.tab[0])
			return (0);
		i ++;
	}
	return (1);
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
int	ft_find_nearest_a0(t_data data)
{
	int i;

	i = 1;

	if (ft_is_sup_than_b(data) || ft_is_inf_than_b(data))
		return (ft_search_max(data));
	if (data.a.tab[0] > data.b.tab[0] && data.a.tab[0] < data.b.tab[data.b.size - 1])
		return (0);
	while (i < data.b.size - 1)
	{
		if (data.b.tab[i - 1] > data.a.tab[0] && data.b.tab[i] < data.a.tab[0])
			return (i);
		i ++;
	}
	return (i);
}

int	ft_find_nearest_b0(t_data data) 
{
	int i;

	i = 0;
	if (data.b.tab[0] < data.b.tab[data.b.size - 1])
		{
			while (i < data.a.size)
			{
				if (data.a.tab[i] > data.b.tab[0] && data.a.tab[i] < data.b.tab[data.b.size - 1])
					return(i);
				i ++;

			}

		}
	else
	{
		while (i < data.a.size)
		{
			if (data.a.tab[i] > data.b.tab[0])
				return(i);
			i ++;
		}

	}
	return (i);
}

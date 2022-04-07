/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeulliot <jeulliot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 19:11:18 by jeulliot          #+#    #+#             */
/*   Updated: 2022/04/07 11:07:29 by jeulliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_data	ft_a_need_rotate_only(t_data data)
{
	int	min;
	int	i;

	min = ft_search_min_a(data);
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
	ft_move_min_a_to_the_top(data, min);
	return (data);
}

t_data	ft_b_need_rotate_only(t_data data)
{
	int	min;
	int	i;

	min = ft_search_min_b(data);
	i = 0;
	while (i < min - 1)
	{
		if (data.b.tab[i] > data.b.tab[i + 1])
			return (data);
		i ++;
	}
	i ++;
	while (i < data.b.size - 1)
	{
		if (data.b.tab[i] > data.b.tab[i + 1])
			return (data);
		i ++;
	}
	ft_move_min_b_to_the_top(data, min);
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
		else if (ft_search_min_a(data) == 0)
		{
			data = ft_sa(data);
			data = ft_ra(data);
		}
		else if (ft_search_min_a(data) == 1 && ft_search_max_in_a(data) == 2)
			data = ft_sa(data);
		else if (ft_search_min_a(data) == 2 && ft_search_max_in_a(data) == 1)
			data = ft_rra(data);
		else if (ft_search_min_a(data) == 2 && ft_search_max_in_a(data) == 0)
		{
			data = ft_sa(data);
			data = ft_rra(data);
		}
	}
	return (data);
}

#include<stdio.h>
void	ft_print_tab(t_data data)
{
	int	i;
	i = 0;
	printf("\n---a---\n");
	while (i < data.a.size)
	{
		printf("%d\n", data.a.tab[i]);
		i ++;
	}
	printf("\n---b---\n");
		i = 0;
	while (i < data.b.size)
	{
		printf("%d\n", data.b.tab[i]);
		i ++;
	}
}

int	ft_is_sup_than_b(t_data data)
{
	int	i;

	i = 0;
	while (i < data.b.size)
	{
		if (data.a.tab[0] < data.b.tab[i])
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
		if (data.a.tab[0] > data.b.tab[i])
			return (0);
		i ++;
	}
	return (1);
}

int	ft_search_max_in_b(t_data data)
{
	int	i;
	int	max;

	i = 1;
	if (data.b.size != 0)
		max = data.b.tab[0];
	while (i < data.b.size)
	{
		if (data.b.tab[i] > max)
		{
			max = data.b.tab[i];
		}
		i ++;
	}
	return (max);
}

t_data	ft_algorithm_small(t_data data)
{	
	int max;

	if (data.a.size == 0)
	{
		max = ft_search_max_in_b (data);
		while (data.b.tab[0] != max)
			data = ft_rb(data);
		while (data.b.size != 0)
			data = ft_pa(data);
		return (data);
	}
	if (data.b.size == 0) //init :push 2 premieres valeurs
	{
		data = ft_pb(data);
		data = ft_pb(data);
		if (data.b.tab[0] < data.b.tab[1])
			data = ft_sb(data);
	}
	if (ft_is_sup_than_b(data))
		data = ft_pb(data);
	else if (ft_is_inf_than_b(data))
	{
		data = ft_pb(data);
		data = ft_rb(data);
	}
	else 
	{
		while (data.a.tab[0] < data.b.tab[0]) 
		{//a opti selon sens
			data = ft_rb(data);
		}
		data = ft_pb(data);
	}

	return (data);
}

/*
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
*/
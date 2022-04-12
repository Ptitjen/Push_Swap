/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_large.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeulliot <jeulliot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 10:22:06 by jeulliot          #+#    #+#             */
/*   Updated: 2022/04/12 11:16:40 by jeulliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_cut_in_5	ft_cut_in_5(t_data data)
{
	t_cut_in_5	nb;
	int			i;
	int			*tab_temp;

	i = 0;
	tab_temp = malloc(sizeof(int) * data.a.size);
	if (tab_temp == NULL)
	{
		free (data.a.tab);
		free (data.b.tab);
		exit (-1);
	}
	while (i < data.a.size)
	{
		tab_temp[i] = data.a.tab[i];
		i ++;
	}
	ft_sort_int_tab(tab_temp, data.a.size);
	nb.min = tab_temp[0];
	nb.sep1 = tab_temp[data.a.size / 5];
	nb.sep2 = tab_temp[2 * data.a.size / 5];
	nb.sep3 = tab_temp[3 * data.a.size / 5];
	nb.sep4 = tab_temp[4 * data.a.size / 5];
	nb.max = tab_temp[data.a.size - 1];
	free(tab_temp);
	return (nb);
}

static int	ft_part_min (t_cut_in_5 nb, int part_tab)
{
	int	part_min;
	
	if (part_tab == 0)
		part_min = nb.min;
	if (part_tab == 1)
		part_min = nb.sep1;
	if (part_tab == 2)
		part_min = nb.sep2;
	if (part_tab == 3)
		part_min = nb.sep3;
	if (part_tab == 4)
		part_min = nb.sep4;
	return (part_min);
}

static int	ft_part_max (t_cut_in_5 nb, int part_tab)
{
	int	part_max;

	if (part_tab == 0)
		part_max = nb.sep1;
	if (part_tab == 1)
		part_max = nb.sep2;
	if (part_tab == 2)
		part_max = nb.sep3;
	if (part_tab == 3)
		part_max = nb.sep4;
	if (part_tab == 4)
		part_max = nb.max;
	return (part_max);
}

static int ft_find_next_int (t_data data, t_cut_in_5 nb, int part_tab)
{
	int part_min;
	int part_max;
	int	i;
	int	next_int1;
	int	next_int2;

	part_min = ft_part_min(nb, part_tab);
	part_max = ft_part_max(nb, part_tab);
	next_int1 = -1;
	next_int2 = -1;
	i = 0;	
	while (i <= data.a.size / 2)
	{
		if (data.a.tab[i] >= part_min && data.a.tab[i] < part_max)
			{
				next_int1 = i;
				break;
			}
		i ++;
	}
	i = data.a.size / 2 + 1;	
	while (i < data.a.size)
	{
		if (data.a.tab[i] >= part_min && data.a.tab[i] < part_max)
			{
				next_int2 = i;
				break;
			}
		i ++;
	}
	if (next_int1 == -1)
		return (next_int2);
	if (next_int2 == -1)
		return (next_int1);
	if (next_int1 < data.a.size - next_int2)
		return (next_int1);
	return (next_int2);
}

static int ft_part_is_over(t_data data, t_cut_in_5 nb, int part_tab)
{
	int	i;
	int part_min;
	int part_max;

	i = 0;
	part_min = ft_part_min(nb, part_tab);
	part_max = ft_part_max(nb, part_tab);
	while (i < data.a.size)
	{
		if (data.a.tab[i] >= part_min && data.a.tab[i] < part_max)
			return (0);
		i ++;
	}
	return (1);
}

t_data	ft_algorithm_large(t_data data)
{
	int	index_a;
	int	index_b;
	int	part_tab;
	t_cut_in_5	nb;
	
	nb = ft_cut_in_5(data);
	part_tab = 0;
	while (data.a.size != 0)
	{
		while (part_tab < 5)
		{
			if (ft_part_is_over(data, nb, part_tab))
				part_tab ++;
			index_a = ft_find_next_int(data, nb, part_tab);
			data = ft_move_a_to_the_top(data, index_a);
			index_b = ft_find_nearest_a0(data);
			data = ft_move_b_to_the_top(data, index_b);
			data = ft_pb(data);		
		}
	}
	while (data.b.size != 0)
		data = ft_pa(data);
	return (data);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_large.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeulliot <jeulliot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 10:22:06 by jeulliot          #+#    #+#             */
/*   Updated: 2022/04/13 09:59:33 by jeulliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_part_min(t_cut_in_5 nb, int part_tab)
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

static int	ft_part_max(t_cut_in_5 nb, int part_tab)
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

static int	ft_find_next_int(t_data data, t_cut_in_5 nb, int part_tab)
{
	int	part_min;
	int	part_max;
	int	next_int1;
	int	next_int2;

	part_min = ft_part_min(nb, part_tab);
	part_max = ft_part_max(nb, part_tab);
	next_int1 = ft_next_int_sup(data, part_min, part_max);
	next_int2 = ft_next_int_inf(data, part_min, part_max);
	if (next_int1 == -1)
		return (next_int2);
	if (next_int2 == -1)
		return (next_int1);
	if (next_int1 < data.a.size - next_int2)
		return (next_int1);
	return (next_int2);
}

static int	ft_part_is_over(t_data data, t_cut_in_5 nb, int part_tab)
{
	int	i;
	int	part_min;
	int	part_max;

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
	int			index_a;
	int			index_b;
	int			part_tab;
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

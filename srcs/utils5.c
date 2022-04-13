/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeulliot <jeulliot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 10:01:59 by jeulliot          #+#    #+#             */
/*   Updated: 2022/04/13 10:08:17 by jeulliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_part_min_1(t_cut_in_13 nb, int part_tab)
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
	if (part_tab == 5)
		part_min = nb.sep5;
	if (part_tab == 6)
		part_min = nb.sep6;
	return (part_min);
}

int	ft_part_min_2(t_cut_in_13 nb, int part_tab)
{
	int	part_min;

	if (part_tab == 7)
		part_min = nb.sep7;
	if (part_tab == 8)
		part_min = nb.sep8;
	if (part_tab == 9)
		part_min = nb.sep9;
	if (part_tab == 10)
		part_min = nb.sep10;
	if (part_tab == 11)
		part_min = nb.sep11;
	if (part_tab == 12)
		part_min = nb.sep12;
	return (part_min);
}

int	ft_part_max_1(t_cut_in_13 nb, int part_tab)
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
		part_max = nb.sep5;
	if (part_tab == 5)
		part_max = nb.sep6;
	if (part_tab == 6)
		part_max = nb.sep7;
	return (part_max);
}

int	ft_part_max_2(t_cut_in_13 nb, int part_tab)
{
	int	part_max;

	if (part_tab == 7)
		part_max = nb.sep8;
	if (part_tab == 8)
		part_max = nb.sep9;
	if (part_tab == 9)
		part_max = nb.sep10;
	if (part_tab == 10)
		part_max = nb.sep11;
	if (part_tab == 11)
		part_max = nb.sep12;
	if (part_tab == 12)
		part_max = nb.max;
	return (part_max);
}

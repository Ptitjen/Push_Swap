/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeulliot <jeulliot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 09:43:43 by jeulliot          #+#    #+#             */
/*   Updated: 2022/04/13 09:59:43 by jeulliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	*ft_copy_tab(int *tab_temp, t_data data)
{
	int	i;

	i = 0;
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
	return (tab_temp);
}

t_cut_in_5	ft_cut_in_5(t_data data)
{
	t_cut_in_5	nb;
	int			*tab_temp;

	tab_temp = malloc(sizeof(int) * data.a.size);
	tab_temp = ft_copy_tab(tab_temp, data);
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

t_cut_in_13	ft_cut_in_13(t_data data)
{
	t_cut_in_13	nb;
	int			i;
	int			*tab_temp;

	i = 0;
	tab_temp = malloc(sizeof(int) * data.a.size);
	tab_temp = ft_copy_tab(tab_temp, data);
	ft_sort_int_tab(tab_temp, data.a.size);
	nb.min = tab_temp[0];
	nb.sep1 = tab_temp[data.a.size / 13];
	nb.sep2 = tab_temp[2 * data.a.size / 13];
	nb.sep3 = tab_temp[3 * data.a.size / 13];
	nb.sep4 = tab_temp[4 * data.a.size / 13];
	nb.sep5 = tab_temp[5 * data.a.size / 13];
	nb.sep6 = tab_temp[6 * data.a.size / 13];
	nb.sep7 = tab_temp[7 * data.a.size / 13];
	nb.sep8 = tab_temp[8 * data.a.size / 13];
	nb.sep9 = tab_temp[9 * data.a.size / 13];
	nb.sep10 = tab_temp[10 * data.a.size / 13];
	nb.sep11 = tab_temp[11 * data.a.size / 13];
	nb.sep12 = tab_temp[12 * data.a.size / 13];
	nb.max = tab_temp[data.a.size - 1];
	free(tab_temp);
	return (nb);
}

int	ft_next_int_sup(t_data data, int part_min, int part_max)
{
	int	next_int1;
	int	i;

	next_int1 = -1;
	i = 0;
	while (i <= data.a.size / 2)
	{
		if (data.a.tab[i] >= part_min && data.a.tab[i] < part_max)
		{
			next_int1 = i;
			break ;
		}
		i ++;
	}
	return (next_int1);
}

int	ft_next_int_inf(t_data data, int part_min, int part_max)
{
	int	next_int2;
	int	i;

	next_int2 = -1;
	i = data.a.size / 2 + 1;
	while (i < data.a.size)
	{
		if (data.a.tab[i] >= part_min && data.a.tab[i] < part_max)
		{
			next_int2 = i;
			break ;
		}
		i ++;
	}
	return (next_int2);
}

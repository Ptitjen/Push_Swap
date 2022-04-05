/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeulliot <jeulliot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 17:53:14 by jeulliot          #+#    #+#             */
/*   Updated: 2022/04/04 17:46:45 by jeulliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_sort(t_data data)
{
	int	i;

	i = 0;
	if (data.b.size != 0)
		return (0);
	while (i < data.a.size - 1)
	{
		if (data.a.tab[i] > data.a.tab[i + 1])
			return (0);
		i ++;
	}
	return (1);
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

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;
	int	min;
	int	cmin;

	i = -1;
	while (++ i < size - 1)
	{
		cmin = i;
		min = tab [i];
		temp = tab [i];
		j = i - 2;
		while (++ j < size - 1)
		{
			if (tab [j + 1] <= min)
			{
				min = tab [j + 1];
				cmin = j + 1;
			}
		}
		tab [i] = min;
		tab [cmin] = temp;
	}
}

int	ft_median(int *tab, int size)
{
	int	i;
	int	*tab_temp;
	int	med;

	i = 0;
	tab_temp = malloc(sizeof(int) * size);
	while (i < size)
	{
		tab_temp[i] = tab[i];
		i ++;
	}
	ft_sort_int_tab(tab_temp, size);
	med = tab_temp[size / 2];
	free(tab_temp);
	return (med);
}

t_data	ft_sort_in_two(t_data data, int size)
{
	int	med;
	int	i;

	i = 0;
	med = ft_median(data.a.tab, size);
	while (i < size)
	{		
		if (data.a.tab[0] > med)
			data = ft_pb(data);
		else
			data = ft_ra(data);
		i ++;
	}	
	return (data);
}

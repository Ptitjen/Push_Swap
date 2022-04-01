/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeulliot <jeulliot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 17:53:14 by jeulliot          #+#    #+#             */
/*   Updated: 2022/04/01 15:57:27 by jeulliot         ###   ########.fr       */
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

int	ft_mediane (int *tab, int size)
{
	int	i;
	//int	j;
	//int	temp;
	//int	min;
	//int	cmin;
	int *tab_temp;
	int med;

	i = 0;
	tab_temp = malloc(sizeof(int) * size);
	while (i < size)
	{
		tab_temp[i] = tab[i];
		i ++;
	}
	ft_sort_int_tab(tab_temp, size);

	med = tab_temp[size/2];
	free(tab_temp);
	return  (med);
}

//fait un pre tri de la moitie selon la mediane
t_data	ft_sort_in_two(t_data data, int size)
{
	int med;
		int i;
	i = 0;
	med = ft_mediane(data.a.tab, size);
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

t_data	ft_sort(t_data data)
{	
	int size;

	size = data.a.size;
	if (size > 5) 
	{	
		data = ft_sort_in_two(data, size);
		if (size > 60)
			data = ft_sort_in_two(data, size/2);
		while (data.b.size != 0)
			data = ft_pa(data);
	}
	while (ft_is_sort(data) == 0)
		data = ft_algorithm_small(data);
	return (data);
}

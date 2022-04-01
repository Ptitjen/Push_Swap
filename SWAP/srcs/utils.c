/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeulliot <jeulliot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:09:10 by jeulliot          #+#    #+#             */
/*   Updated: 2022/04/01 15:57:30 by jeulliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_str_is_num(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_search_min(t_data data)
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

int	ft_search_max_in_a(t_data data)
{
	int	i;
	int	max;
	int index;

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
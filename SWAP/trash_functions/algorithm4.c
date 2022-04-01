/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm4.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeulliot <jeulliot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 11:04:57 by jeulliot          #+#    #+#             */
/*   Updated: 2022/04/01 15:57:33 by jeulliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/*

int	ft_rest_of_a_is_sup_b(t_data data)
{
	int	i;
	int	j;

	i = 0;
	while (i < data.a.size)
	{
		j = 0;
		while (j < data.b.size)
		{
			if (data.b.tab[j] > data.a.tab[i])
			return (0);
			j ++;
		}
		i ++;
	}
	return (1);
}
int	ft_index_nearest_int(t_data data) // ne se fait que si il existe un nb inferieur a tab a 0 dans b
{
	int	diff;
	int	i;
	int index;

	i = 0;	
	
	while (i < data.b.size)
	{		
		if (data.a.tab[0] - data.b.tab[i] > 0)
		{
			diff = data.a.tab[0] - data.b.tab[i];
			index = i;
			break;
		}
		i ++;
	}
	i = 0;

	while (i < data.b.size)
	{
		
		if (data.a.tab[0] - data.b.tab[i] < diff && data.a.tab[0] - data.b.tab[i] > 0)
		{
			diff = data.a.tab[0] - data.b.tab[i];
			index = i;
		}
		i ++;
	}
	
	return (index);
}

int ft_is_inf_than_all_b(t_data data)
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

int ft_b_is_invert_sort(t_data data)
{
	int	i;

	i = 0;
	while (i < data.b.size - 1)
	{
		if (data.b.tab[i] < data.b.tab[i + 1])
			return (0);
		i ++;
	}
	return (1);

}

int	ft_search_max(t_data data)
{
	int	i;
	int	max;
	int index;

	i = 1;
	index = 0;
	if (data.b.size != 0)
		max = data.b.tab[0];
	while (i < data.b.size)
	{
		if (data.b.tab[i] > max)
		{
			max = data.b.tab[i];
			index = i;
		}
		i ++;
	}
	return (index);
}

t_data	ft_algorithm4(t_data data)
{
	int	index_b;
	
	int	i;
	i = 0 ;
	if (data.a.size == 3 && ft_rest_of_a_is_sort(data) == 0)
		data = ft_algorithm_mini(data);
	if (data.a.size == 2 && ft_rest_of_a_is_sort(data) == 0)
		data = ft_sa(data);
	if (data.a.size == 0 || (ft_rest_of_a_is_sort(data) && ft_rest_of_a_is_sup_b(data)))
		{
				while (ft_b_is_invert_sort(data) != 1) 
			{
				if (ft_search_max(data) <= data.b.size/2)
					data = ft_rb(data);
				else
					data = ft_rrb(data);
			}
			while (data.b.size != 0)
				data = ft_pa(data);
			return (data);
		}
	else
	{
		/*if (data.b.size > 0 && data.a.size > 1 && data.b.tab[0]>data.a.tab[0] && data.b.tab[0]<data.a.tab[1])
		{
			data = ft_ra(data);
			data = ft_pa(data);
			data = ft_rra(data);
		}
		else {*/
			if (data.a.size > 1 && data.b.size > 1 && data.a.tab[1] < data.b.tab[0] && data.a.tab[1] > data.b.tab[1] && data.a.tab[0] < data.b.tab[1])
			{
				data = ft_rr(data);
				data = ft_pb(data);
				return (data);
			}
			if (data.a.size > 1 && data.a.tab[0] > data.a.tab[1])
				data = ft_sa(data);

			if (data.b.size == 0)
				data = ft_pb(data);
			if (ft_is_inf_than_all_b (data)) // remet la plus grande valeur en haut
				{
					index_b = ft_search_max(data);
					
					if (index_b <= data.b.size / 2) // remonte la valeur
					{
						while (i < index_b)
						{	
							data = ft_rb(data);
							i ++;
						}
					}
					else // remet la valeur en premier en passant par le bas
					{
						while (i < data.b.size - index_b)
						{	
							data = ft_rrb(data);
							i ++;
						}
					}
					data = ft_pb(data);
				}
			else 
			{
				index_b = ft_index_nearest_int(data);
				i = 0;
				if (index_b <= data.b.size / 2) // remonte la valeur
				{
					while (i < index_b)
					{	
						data = ft_rb(data);
						i ++;
					}
				}
				else // remet la valeur en premier en passant par le bas
				{
					while (i < data.b.size - index_b)
					{	
						data = ft_rrb(data);
						i ++;
					}
				}
				data = ft_pb(data);
			}
		/*}*/
	}

	return (data);
}

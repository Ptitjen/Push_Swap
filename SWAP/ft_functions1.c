/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_functions1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeulliot <jeulliot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 13:20:07 by jeulliot          #+#    #+#             */
/*   Updated: 2022/03/29 18:47:24 by jeulliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_data	ft_sa(t_data data)
{
	int	temp;

	if (data.a.size >= 2)
	{
		temp = data.a.tab[0];
		data.a.tab[0] = data.a.tab[1];
		data.a.tab[1] = temp;
	}
	write (1, "sa\n", 3);
	return (data);
}

t_data	ft_sb(t_data data)
{
	int	temp;

	if (data.b.size >= 2)
	{
		temp = data.b.tab[0];
		data.b.tab[0] = data.b.tab[1];
		data.b.tab[1] = temp;
	}
	write (1, "sb\n", 3);
	return (data);
}

t_data	ft_ss(t_data data)
{
	int	temp;

	if (data.a.size >= 2)
	{
		temp = data.a.tab[0];
		data.a.tab[0] = data.a.tab[1];
		data.a.tab[1] = temp;
	}
	if (data.b.size >= 2)
	{
		temp = data.b.tab[0];
		data.b.tab[0] = data.b.tab[1];
		data.b.tab[1] = temp;
	}
	write (1, "ss\n", 3);
	return (data);
}

t_data	ft_pa(t_data data)
{
	int	temp;
	int	i;

	i = 0;
	if (data.b.size > 0)
	{
		temp = data.b.tab[0];
		while (i < data.b.size)
		{
			data.b.tab[i] = data.b.tab[i + 1];
			i ++;
		}
		data.b.size --;
		i = data.a.size;
		while (i > 0)
		{
			data.a.tab[i] = data.a.tab[i - 1];
			i --;
		}		
		data.a.tab[0] = temp;
		data.a.size ++;
	}
	write (1, "pa\n", 3);
	return (data);
}

t_data	ft_pb(t_data data)
{
	int	temp;
	int	i;

	i = 0;
	if (data.a.size > 0)
	{
		temp = data.a.tab[0];
		while (i < data.a.size)
		{
			data.a.tab[i] = data.a.tab[i + 1];
			i ++;
		}
		data.a.size --;
		i = data.b.size;
		while (i > 0)
		{
			data.b.tab[i] = data.b.tab[i - 1];
			i --;
		}		
		data.b.tab[0] = temp;
		data.b.size ++;
	}	
	write (1, "pb\n", 3);
	return (data);
}

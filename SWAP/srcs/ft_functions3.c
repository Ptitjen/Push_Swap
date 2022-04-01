/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_functions3.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeulliot <jeulliot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 17:40:44 by jeulliot          #+#    #+#             */
/*   Updated: 2022/04/01 15:57:25 by jeulliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_data	ft_rra(t_data data)
{
	int	temp;
	int	i;

	i = data.a.size;
	if (data.a.size > 1)
	{
		temp = data.a.tab[data.a.size - 1];
		while (i > 0)
		{
			data.a.tab[i] = data.a.tab[i - 1];
			i --;
		}
		data.a.tab[0] = temp;
	}
	write (1, "rra\n", 4);
	return (data);
}

t_data	ft_rrb(t_data data)
{
	int	temp;
	int	i;

	i = data.b.size;
	if (data.b.size > 1)
	{
		temp = data.b.tab[data.b.size - 1];
		while (i > 0)
		{
			data.b.tab[i] = data.b.tab[i - 1];
			i --;
		}
		data.b.tab[0] = temp;
	}
	write (1, "rrb\n", 4);
	return (data);
}

t_data	ft_rrr(t_data data)
{
	int	temp;
	int	i;

	i = data.a.size;
	if (data.a.size > 1)
	{
		temp = data.a.tab[data.a.size - 1];
		while (i > 0)
		{
			data.a.tab[i] = data.a.tab[i - 1];
			i --;
		}
		data.a.tab[0] = temp;
	}
		i = data.b.size;
	if (data.b.size > 1)
	{
		temp = data.b.tab[data.b.size - 1];
		while (i > 0)
		{
			data.b.tab[i] = data.b.tab[i - 1];
			i --;
		}
		data.b.tab[0] = temp;
	}
	write (1, "rrr\n", 4);
	return (data);
}

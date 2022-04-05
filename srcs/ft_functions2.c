/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_functions2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeulliot <jeulliot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 13:20:16 by jeulliot          #+#    #+#             */
/*   Updated: 2022/04/04 17:46:42 by jeulliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_data	ft_rb(t_data data)
{
	int	temp;
	int	i;

	i = 0;
	if (data.b.size > 1)
	{
		temp = data.b.tab[0];
		while (i < data.b.size - 1)
		{
			data.b.tab[i] = data.b.tab[i + 1];
			i ++;
		}
		data.b.tab[i] = temp;
	}
	write (1, "rb\n", 3);
	return (data);
}

t_data	ft_ra(t_data data)
{
	int	temp;
	int	i;

	i = 0;
	if (data.a.size > 1)
	{
		temp = data.a.tab[0];
		while (i < data.a.size - 1)
		{
			data.a.tab[i] = data.a.tab[i + 1];
			i ++;
		}
		data.a.tab[i] = temp;
	}
	write (1, "ra\n", 3);
	return (data);
}

t_data	ft_rr(t_data data)
{
	int	temp;
	int	i;

	i = -1;
	if (data.a.size > 1)
	{
		temp = data.a.tab[0];
		while (++i < data.a.size - 1)
			data.a.tab[i] = data.a.tab[i + 1];
		data.a.tab[i] = temp;
	}
	i = -1;
	if (data.b.size > 1)
	{
		temp = data.b.tab[0];
		while (++i < data.b.size - 1)
			data.b.tab[i] = data.b.tab[i + 1];
		data.b.tab[i] = temp;
	}
	write (1, "rr\n", 3);
	return (data);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_functions3.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeulliot <jeulliot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 17:40:44 by jeulliot          #+#    #+#             */
/*   Updated: 2022/04/04 13:12:09 by jeulliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

t_data	ft_rrotate_a(t_data data)
{
	int	temp;
	int	i;

	i = data.a.size;
	temp = data.a.tab[data.a.size - 1];
	while (i > 0)
	{
		data.a.tab[i] = data.a.tab[i - 1];
		i --;
	}
	data.a.tab[0] = temp;
	return (data);
}

t_data	ft_rrotate_b(t_data data)
{
	int	temp;
	int	i;

	i = data.b.size;
	temp = data.b.tab[data.b.size - 1];
	while (i > 0)
	{
		data.b.tab[i] = data.b.tab[i - 1];
		i --;
	}
	data.b.tab[0] = temp;
	return (data);
}

t_data	ft_rra(t_data data)
{
	if (data.a.size > 1)
		data = ft_rrotate_a(data);
	return (data);
}

t_data	ft_rrb(t_data data)
{
	if (data.b.size > 1)
		data = ft_rrotate_b(data);
	return (data);
}

t_data	ft_rrr(t_data data)
{
	if (data.a.size > 1)
		data = ft_rrotate_a(data);
	if (data.b.size > 1)
		data = ft_rrotate_b(data);
	return (data);
}

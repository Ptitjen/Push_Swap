/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeulliot <jeulliot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 17:53:14 by jeulliot          #+#    #+#             */
/*   Updated: 2022/04/05 10:43:26 by jeulliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

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

t_data	ft_fill_tab(t_data data, int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{				
		data.a.tab[i - 1] = ft_atoi(argv[i], data.a.tab);
		i ++;
	}
	data.a.size = i - 1;
	return (data);
}

void	ft_result(t_data data, char *str, char **inst)
{
	if (data.b.size != 0 || ft_is_sort(data) == 0)
		write (1, "KO\n", 3);
	else
		write (1, "OK\n", 3);
	free(data.a.tab);
	free(data.b.tab);
	free(str);
	free(inst);
}

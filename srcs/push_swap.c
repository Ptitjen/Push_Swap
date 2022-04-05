/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeulliot <jeulliot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:56:23 by jeulliot          #+#    #+#             */
/*   Updated: 2022/04/05 17:15:13 by jeulliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_data	ft_sort(t_data data)
{	
	int	size;

	size = data.a.size;
	if (size > 5 && ft_is_sort(data) == 0)
	{	
		data = ft_sort_in_two(data, size);
		if (size >= 60)
			data = ft_sort_in_two(data, size / 2);
		if (size >= 80)
			data = ft_sort_in_two(data, size / 4);
		while (data.b.size != 0)
			data = ft_pa(data);
	}
	while (ft_is_sort(data) == 0)
		data = ft_algorithm_small(data);
	return (data);
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

int	main(int argc, char **argv)
{
	t_data	data;

	if (argc == 1)
		return (-1);
	ft_arg_error(argc, argv);
	data.a.tab = malloc(sizeof(int) * (argc - 1));
	if (data.a.tab == NULL)
		return (-1);
	data = ft_fill_tab(data, argc, argv);
	ft_is_duplicate(data.a.tab, data.a.size);
	data.b.tab = malloc(sizeof(int) * (argc - 1));
	if (data.b.tab == NULL)
	{
		free (data.a.tab);
		return (-1);
	}
	data.b.size = 0;
	data = ft_sort(data);
	free(data.a.tab);
	free(data.b.tab);
	return (0);
}

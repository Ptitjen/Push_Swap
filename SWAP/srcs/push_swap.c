/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeulliot <jeulliot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:56:23 by jeulliot          #+#    #+#             */
/*   Updated: 2022/04/01 15:57:28 by jeulliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// a suppprimer
void	ft_print_tab(t_data data)
{
	int	i;

	i = 0;
	printf("---\na : \n");
	while (i < data.a.size)
	{
		printf("%d\n", data.a.tab[i]);
		i ++;
	}
	i = 0;
	printf("---\nb : \n");
	while (i < data.b.size)
	{
		printf("%d\n", data.b.tab[i]);
		i ++;
	}
	printf("---\n");
}

int	ft_is_number(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '-' || str[0] == '+')
	{
		i ++;
		if (str[i] == '\0')
			return (0);
	}
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i ++;
	}
	return (1);
}

void	ft_arg_error(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (ft_is_number(argv[i]) == 0)
		{
			write (2, "Error\n", 6);
			exit (-1);
		}
		i ++;
	}
}

void	ft_is_duplicate(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{		
			if (tab[j] == tab[i])
			{
				write (2, "Error\n", 6);
				free (tab);
				exit (-1);
			}
			j ++;
		}
		i ++;
	}
}

int	main(int argc, char **argv)
{
	t_data	data;
	int		i;

	i = 1;
	if (argc == 1)
		return (-1);
	ft_arg_error(argc, argv);
	data.a.tab = malloc(sizeof(int) * (argc - 1));
	while (i < argc)
	{				
		data.a.tab[i - 1] = ft_atoi(argv[i]);
		i ++;
	}
	data.a.size = i - 1;
	ft_is_duplicate(data.a.tab, data.a.size);
	data.b.tab = malloc(sizeof(int) * (argc - 1));
	data.b.size = 0;
	data = ft_sort(data);
	free(data.a.tab);
	free(data.b.tab);
	return (0);
}

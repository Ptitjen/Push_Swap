/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeulliot <jeulliot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:56:23 by jeulliot          #+#    #+#             */
/*   Updated: 2022/03/29 14:42:07 by jeulliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

void	ft_is_duplicate(int *tab, int argc)
{
	int	i;
	int	j;

	i = 0;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j + i < argc)
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

//marche pas
/*void	ft_is_more_than_integer(char *argvi)
{
	int	i;

	i = 0;

	i ++;
	
}*/

int	main(int argc, char **argv)
{
	int	*tab;
	int	i;

	i = 1;
	if (argc == 1)
		return (-1);
	ft_arg_error(argc, argv);
	tab = malloc(sizeof(int) * (argc - 1));
	while (i < argc)
	{				
		//ft_is_more_than_integer(argv[i]);
		tab[i - 1] = ft_atoi(argv[i]);
		i ++;
	}	
	ft_is_duplicate(tab, argc);	
	i = 0;
	ft_sa(tab, argc - 1);
	while (i < argc - 1)
	{
		printf("%d\n", tab[i]);
		i ++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeulliot <jeulliot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 10:07:50 by jeulliot          #+#    #+#             */
/*   Updated: 2022/04/13 12:47:33 by jeulliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_str_is_num(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
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

	if (argc == 1)
		exit (-1);
	i = 1;
	while (i < argc)
	{
		if (ft_is_number(argv[i]) == 0 || argv[i][0] == '\0')
		{
			write (2, "Error\n", 6);
			exit (-1);
		}
		i ++;
	}
}

int	ft_arg_error_tmp(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (ft_is_number(argv[i]) == 0 || argv[i][0] == '\0')
		{
			write (2, "Error\n", 6);
			return (-1);
		}
		i ++;
	}
	return (0);
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

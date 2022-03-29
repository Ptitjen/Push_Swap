/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_functions1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeulliot <jeulliot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 13:20:07 by jeulliot          #+#    #+#             */
/*   Updated: 2022/03/29 13:48:43 by jeulliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(int *tab, int size)
{
	int	temp;

	if (size >= 2)
	{
		temp = tab[0];
		tab[0] = tab[1];
		tab[1] = temp;
	}
	write (1, "sa\n", 3);
}

void	ft_sb(int *tab, int size)
{
	int	temp;

	if (size >= 2)
	{
		temp = tab[0];
		tab[0] = tab[1];
		tab[1] = temp;
	}
	write (1, "sb\n", 3);
}

void	ft_ss(int *tab_a, int *tab_b, int size_a, int size_b)
{
	int	temp;

	if (size_a >= 2)
	{
		temp = tab_a[0];
		tab_a[0] = tab_a[1];
		tab_a[1] = temp;
	}
	if (size_b >= 2)
	{
		temp = tab_b[0];
		tab_b[0] = tab_b[1];
		tab_b[1] = temp;
	}
	write (1, "ss\n", 3);
}

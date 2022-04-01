/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeulliot <jeulliot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 22:16:17 by jeulliot          #+#    #+#             */
/*   Updated: 2022/04/01 15:57:26 by jeulliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;
	int	min;
	int	cmin;

	i = -1;
	while (++ i < size - 1)
	{
		cmin = i;
		min = tab [i];
		temp = tab [i];
		j = i - 2;
		while (++ j < size - 1)
		{
			if (tab [j + 1] <= min)
			{
				min = tab [j + 1];
				cmin = j + 1;
			}
		}
		tab [i] = min;
		tab [cmin] = temp;
	}
}

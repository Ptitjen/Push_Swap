/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeulliot <jeulliot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 14:09:52 by jeulliot          #+#    #+#             */
/*   Updated: 2022/04/04 14:33:51 by jeulliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	ft_diff(unsigned int m, unsigned int n)
{
	if (m > n)
		return (1);
	if (m < n)
		return (-1);
	else
		return (0);
}

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str2[i] != '\0' && str1[i] != '\0')
	{
		if (str1[i] != str2[i])
			return (ft_diff(str1[i], str2[i]));
		if (str1[i] == str2[i])
			i++;
	}
	if (str1[i] == '\0' && str2[i] != '\0')
		return (-1);
	if (str1[i] != '\0' && str2[i] == '\0')
		return (1);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeulliot <jeulliot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 14:04:57 by jeulliot          #+#    #+#             */
/*   Updated: 2022/03/29 15:12:46 by jeulliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_whitespace(char c)
{
	if (c == 32 || c == '\t' || c == '\n'
		|| c == '\v' || c == '\f' || c == '\r')
		return (1);
	return (0);
}

int	ft_is_operator(char c)
{
	if (c == '-' || c == '+')
	{
		if (c == '-')
			return (-1);
		if (c == '+')
			return (1);
	}
	return (0);
}

int	ft_sp(const char *s1, const char *s2, int n)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i ++;
	}
	if (i == n)
		return (0);
	if (s1[i] == '\0' && s2[i] == '\0')
		return (0);
	if (s1[i] == '\0')
		return (-1);
	if (s2[i] == '\0')
		return (1);
	return (0);
}

void	ft_is_int_max_or_min(const char *str, int k, int i, int m)
{
	if ((k >= 10 && ft_sp(str + i, "2147483647", 10) && m == 1)
		|| (k >= 10 && ft_sp(str + i, "2147483648", 10) && m == -1))
	{
		write(1, "Error\n", 6);
		exit (-1);
	}
}

int	ft_atoi(const char *str)
{
	int				i;
	int				m;
	int				k;
	unsigned int	n;

	i = 0;
	m = 1;
	n = 0;
	while (ft_is_whitespace(str[i]) == 1)
		i ++;
	if (ft_is_operator(str[i]) != 0)
	{
		m = ft_is_operator(str[i]);
		i ++;
	}
	k = 0;
	while (ft_str_is_num(str[i + k]) == 1 && str[i + k] != '\0')
	{
		ft_is_int_max_or_min(str, k, i, m);
		n = n * 10 + str[i + k] - 48;
		k ++;
	}
	return (m * n);
}

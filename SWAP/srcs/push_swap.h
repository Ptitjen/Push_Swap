/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeulliot <jeulliot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:56:35 by jeulliot          #+#    #+#             */
/*   Updated: 2022/04/01 15:59:57 by jeulliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdio.h>

typedef struct s_tab {
	int	size;
	int	*tab;
}	t_tab;

typedef struct s_data {
	t_tab	a;
	t_tab	b;
}	t_data;

int		ft_atoi(const char *str);
int		ft_is_sort(t_data data);
int		ft_is_operator(char c);
int		ft_is_whitespace(char c);
void	ft_sort_int_tab(int *tab, int size);
int		ft_str_is_num(char c);
int		ft_search_min(t_data data);
int		ft_search_max(t_data data);
int		ft_search_max_in_a(t_data data);
int		ft_sp(const char *s1, const char *s2, int n);
void	ft_is_int_max_or_min(const char *str, int k, int i, int m);
t_data	ft_sa(t_data data);
t_data	ft_sb(t_data data);
t_data	ft_ss(t_data data);
t_data	ft_pa(t_data data);
t_data	ft_pb(t_data data);
t_data	ft_ra(t_data data);
t_data	ft_rb(t_data data);
t_data	ft_rr(t_data data);
t_data	ft_rra(t_data data);
t_data	ft_rrb(t_data data);
t_data	ft_rrr(t_data data);
t_data	ft_sort(t_data data);
t_data	ft_algorithm1(t_data data);
t_data	ft_algorithm_small(t_data data);
t_data	ft_algorithm3(t_data data);
t_data	ft_algorithm4(t_data data);
t_data	ft_algorithm_mini(t_data data);

int		ft_rest_of_a_is_sort(t_data data);
int		ft_a_is_reverse_sort(t_data data);
void	ft_putnbr_fd(int n, int fd);
void	ft_print_tab(t_data data);

#endif

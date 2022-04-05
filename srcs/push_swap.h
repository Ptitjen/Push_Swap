/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeulliot <jeulliot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:56:35 by jeulliot          #+#    #+#             */
/*   Updated: 2022/04/05 17:18:01 by jeulliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_tab {
	int	size;
	int	*tab;
}	t_tab;

typedef struct s_data {
	t_tab	a;
	t_tab	b;
}	t_data;

int		ft_atoi(const char *str, int *tab);
int		ft_is_int_max_or_min(const char *str, int k, int i, int m);
int		ft_is_sort(t_data data);
int		ft_is_operator(char c);
int		ft_is_whitespace(char c);
int		ft_median(int size, t_data data);
int		ft_rest_of_a_is_sort(t_data data);
int		ft_str_is_num(char c);
int		ft_search_max_in_a(t_data data);
int		ft_search_min(t_data data);
int		ft_sp(const char *s1, const char *s2, int n);
void	ft_arg_error(int argc, char **argv);
void	ft_is_duplicate(int *tab, int size);
void	ft_sort_int_tab(int *tab, int size);
t_data	ft_sa(t_data data);
t_data	ft_sb(t_data data);
t_data	ft_ss(t_data data);
t_data	ft_pa(t_data data);
t_data	ft_pb(t_data data);
t_data	ft_ra(t_data data);
t_data	ft_rb(t_data data);
t_data	ft_rr(t_data data);
t_data	ft_rrotate_a(t_data data);
t_data	ft_rrotate_b(t_data data);
t_data	ft_rra(t_data data);
t_data	ft_rrb(t_data data);
t_data	ft_rrr(t_data data);
t_data	ft_sort(t_data data);
t_data	ft_move_min_to_the_top(t_data data, int index);
t_data	ft_need_rotate_only(t_data data);
t_data	ft_sort_in_two(t_data data, int size);
t_data	ft_algorithm_mini(t_data data);
t_data	ft_algorithm_small(t_data data);
t_data	ft_fill_tab(t_data data, int argc, char **argv);

#endif

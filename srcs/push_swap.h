/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeulliot <jeulliot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:56:35 by jeulliot          #+#    #+#             */
/*   Updated: 2022/04/13 10:09:02 by jeulliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>

typedef struct s_tab {
	int	size;
	int	*tab;
}	t_tab;

typedef struct s_data {
	t_tab	a;
	t_tab	b;
}	t_data;

typedef struct s_cut_in_5 {
	int	min;
	int	sep1;
	int	sep2;
	int	sep3;
	int	sep4;
	int	max;
}	t_cut_in_5;

typedef struct s_cut_in_13 {
	int	min;
	int	sep1;
	int	sep2;
	int	sep3;
	int	sep4;
	int	sep5;
	int	sep6;
	int	sep7;
	int	sep8;
	int	sep9;
	int	sep10;
	int	sep11;
	int	sep12;
	int	max;
}	t_cut_in_13;

int			ft_atoi(const char *str, int *tab);
int			ft_is_int_max_or_min(const char *str, int k, int i, int m);
int			ft_is_sort(t_data data);
int			ft_rest_of_a_is_sort(t_data data);
int			ft_is_operator(char c);
int			ft_is_whitespace(char c);
int			ft_str_is_num(char c);
int			ft_next_int_sup(t_data data, int part_min, int part_max);
int			ft_next_int_inf(t_data data, int part_min, int part_max);
int			ft_search_max_in_a(t_data data);
int			ft_search_min(t_data data);
int			ft_search_max(t_data data);
int			ft_sp(const char *s1, const char *s2, int n);
int			ft_find_nearest_a0(t_data data);
int			ft_part_max_1(t_cut_in_13 nb, int part_tab);
int			ft_part_max_2(t_cut_in_13 nb, int part_tab);
int			ft_part_min_1(t_cut_in_13 nb, int part_tab);
int			ft_part_min_2(t_cut_in_13 nb, int part_tab);
void		ft_arg_error(int argc, char **argv);
void		ft_is_duplicate(int *tab, int size);
void		ft_sort_int_tab(int *tab, int size);
t_data		ft_sa(t_data data);
t_data		ft_sb(t_data data);
t_data		ft_ss(t_data data);
t_data		ft_pa(t_data data);
t_data		ft_pb(t_data data);
t_data		ft_ra(t_data data);
t_data		ft_rb(t_data data);
t_data		ft_rr(t_data data);
t_data		ft_rrotate_a(t_data data);
t_data		ft_rrotate_b(t_data data);
t_data		ft_rra(t_data data);
t_data		ft_rrb(t_data data);
t_data		ft_rrr(t_data data);
t_data		ft_sort(t_data data);
t_data		ft_move_a_to_the_top(t_data data, int index);
t_data		ft_move_b_to_the_top(t_data data, int index);
t_data		ft_need_rotate_only(t_data data);
t_data		ft_algorithm_mini(t_data data);
t_data		ft_algorithm_small(t_data data);
t_data		ft_algorithm_large(t_data data);
t_data		ft_algorithm_very_large(t_data data);
t_data		ft_fill_tab(t_data data, int argc, char **argv);
t_cut_in_5	ft_cut_in_5(t_data data);
t_cut_in_13	ft_cut_in_13(t_data data);
#endif

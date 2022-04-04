/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeulliot <jeulliot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 12:34:14 by jeulliot          #+#    #+#             */
/*   Updated: 2022/04/04 17:40:51 by jeulliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	ft_is_instruction(char *str)
{
	if (ft_strcmp(str, "sa\n") == 0
		|| ft_strcmp(str, "sb\n") == 0
		|| ft_strcmp(str, "ss\n") == 0
		|| ft_strcmp(str, "ra\n") == 0
		|| ft_strcmp(str, "rb\n") == 0
		|| ft_strcmp(str, "rr\n") == 0
		|| ft_strcmp(str, "rra\n") == 0
		|| ft_strcmp(str, "rrb\n") == 0
		|| ft_strcmp(str, "rrr\n") == 0
		|| ft_strcmp(str, "pa\n") == 0
		|| ft_strcmp(str, "pb\n") == 0)
		return (1);
	return (0);
}

t_data	ft_execute_instruction(t_data data, char *str)
{
	if (ft_strcmp(str, "sa") == 0)
		data = ft_sa(data);
	else if (ft_strcmp(str, "sb") == 0)
		data = ft_sb(data);
	else if (ft_strcmp(str, "ss") == 0)
		data = ft_ss(data);
	else if (ft_strcmp(str, "rra") == 0)
		data = ft_rra(data);
	else if (ft_strcmp(str, "rrb") == 0)
		data = ft_rrb(data);
	else if (ft_strcmp(str, "rrr") == 0)
		data = ft_rrr(data);
	else if (ft_strcmp(str, "ra") == 0)
		data = ft_ra(data);
	else if (ft_strcmp(str, "rb") == 0)
		data = ft_rb(data);
	else if (ft_strcmp(str, "rr") == 0)
		data = ft_rr(data);
	else if (ft_strcmp(str, "pa") == 0)
		data = ft_pa(data);
	else if (ft_strcmp(str, "pb") == 0)
		data = ft_pb(data);
	return (data);
}

char	*ft_fill_instruction_line(char *str, char *new, t_data data)
{
	while (new != NULL)
	{
		ft_error_in_stdin(data, new);
		str = ft_strjoin(str, new);
		free (new);
		new = get_next_line(1);
	}
	return (str);
}

int	main(int argc, char **argv)
{
	t_data	data;
	char	*str;
	char	*new;
	char	**inst;
	int		i;

	i = -1;
	if (argc == 1)
		exit (-1);
	ft_arg_error(argc, argv);
	data.a.tab = malloc(sizeof(int) * (argc - 1));
	data = ft_fill_tab(data, argc, argv);
	ft_is_duplicate(data.a.tab, data.a.size);
	data.b.tab = malloc(sizeof(int) * (argc - 1));
	data.b.size = 0;
	str = malloc(sizeof(char));
	str[0] = '\0';
	new = get_next_line(1);
	str = ft_fill_instruction_line(str, new, data);
	inst = ft_split(str, '\n');
	while (inst[++i] != NULL)
		data = ft_execute_instruction(data, inst[i]);
	ft_result(data, str);
	return (0);
}

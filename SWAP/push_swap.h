/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeulliot <jeulliot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:56:35 by jeulliot          #+#    #+#             */
/*   Updated: 2022/03/29 14:26:09 by jeulliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdio.h>

int		ft_atoi(const char *str);
void	ft_sa(int *tab, int size);
void	ft_sb(int *tab, int size);
void	ft_ss(int *tab_a, int *tab_b, int size_a, int size_b);
void	ft_putnbr_fd(int n, int fd);

#endif

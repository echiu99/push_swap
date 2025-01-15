/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echiu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 21:35:06 by echiu             #+#    #+#             */
/*   Updated: 2024/03/20 14:19:32 by echiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdio.h>
# include <unistd.h>

typedef struct s_stack
{
	int	arr[501];
	int	size;
	int	index;
}	t_stack;

typedef struct s_data
{
	t_stack	a;
	t_stack	b;
	t_stack	c;
}	t_data;

void	swap_a(t_data *data);
void	swap_b(t_data *data);
void	swap_both(t_data *data);
void	push_a(t_data *data);
void	push_b(t_data *data);
void	rotate_a(t_data *data);
void	rotate_b(t_data *data);
void	rotate_both(t_data *data);
void	reverse_rotate_a(t_data *data);
void	reverse_rotate_b(t_data *data);
void	reverse_rotate_both(t_data *data);
void	ft_free_char2(char **tofree);
void	ft_sort(t_data *data);
void	ft_smol_sort(t_data *data);
void	ft_smollest_sort(t_data *data);
void	ft_move_to_top(t_data *data, int i);
void	ft_init_stack_c(t_data *data);
void	ft_check_push(t_data *data);
void	ft_push_back_to_a(t_data *data);
void	ft_fix_it(t_data *data);
void	ft_chunky_sort(t_data *data);
void	high_to_top(t_data *data);
void	ft_get_right_pos(t_data *data);
void	ft_check_too_long(char **str, int i, int you);
long	ft_atol(const char *str);
int		is_a_sorted(t_data *data);
int		ft_fso(t_data *data, int i);
int		ft_chunk_manager(t_data *data, int k, int l);
int		check_low(t_data *data);
int		check_high(t_data *data);

#endif

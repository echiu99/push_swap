/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_smol_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echiu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 18:08:32 by echiu             #+#    #+#             */
/*   Updated: 2024/03/20 15:02:34 by echiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_smollest_sort(t_data *data)
{
	if (data->a.size <= 3)
	{
		if ((data->a.arr[2] > data->a.arr[0] && data->a.arr[2]
				> data->a.arr[1]) || data->a.size == 2)
			swap_a(data);
		else if (data->a.arr[1] > data->a.arr[0] && data->a.arr[1]
			> data->a.arr[2] && data->a.arr[2] > data->a.arr[0])
		{
			rotate_a(data);
			swap_a(data);
			reverse_rotate_a(data);
		}
		else if (data->a.arr[1] > data->a.arr[0] && data->a.arr[1]
			> data->a.arr[2] && data->a.arr[0] > data->a.arr[2])
			reverse_rotate_a(data);
		else if (data->a.arr[0] > data->a.arr[1] && data->a.arr[0]
			> data->a.arr[2] && data->a.arr[2] > data->a.arr[1])
			rotate_a(data);
		else if (data->a.arr[0] > data->a.arr[1]
			&& data->a.arr[1] > data->a.arr[2])
		{
			swap_a(data);
			reverse_rotate_a(data);
		}
	}
}

void	ft_sort_five(t_data *data)
{
	int	i;

	i = 0;
	while (data->a.arr[i] != data->c.arr[0])
		i++;
	ft_move_to_top(data, i);
	push_b(data);
	i = 0;
	while (data->a.arr[i] != data->c.arr[1])
		i++;
	ft_move_to_top(data, i);
	push_b(data);
	if (is_a_sorted(data) == 1)
		ft_smollest_sort(data);
	push_a(data);
	push_a(data);
}

void	ft_smol_sort(t_data *data)
{
	int	i;

	i = 0;
	if (data->a.size <= 5)
	{
		if (data->a.size == 3)
			ft_smollest_sort(data);
		else if (data->a.size == 4)
		{
			while (data->a.arr[i] != data->c.arr[0])
				i++;
			ft_move_to_top(data, i);
			push_b(data);
			if (is_a_sorted(data) == 1)
				ft_smollest_sort(data);
			push_a(data);
		}
		else
			ft_sort_five(data);
	}
}

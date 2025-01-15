/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_thicc_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echiu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 16:09:11 by echiu             #+#    #+#             */
/*   Updated: 2024/03/20 15:34:01 by echiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_thicc_sort(t_data *data)
{
	int	i;
	int	j;

	j = 0;
	if (data->a.size <= 10 && data->a.size > 5)
	{
		while (data->a.size > 3)
		{
			i = 0;
			while (data->a.arr[i] != data->c.arr[j])
				i++;
			ft_move_to_top(data, i);
			push_b(data);
			j++;
		}
		if (is_a_sorted(data) == 1)
			ft_smollest_sort(data);
		while (data->b.size != 0)
			push_a(data);
	}
}

void	ft_thiccer_sort(t_data *data)
{
	int	k;
	int	l;
	int	j;
	int	count;

	k = 0;
	l = (data->c.size / 5) - 1;
	while (data->a.size > 0)
	{
		count = 0;
		while (count < (data->c.size / 5) && data->a.size != 0)
		{
			j = ft_chunk_manager(data, k, l);
			ft_move_to_top(data, j);
			ft_check_push(data);
			count++;
		}
		k += data->c.size / 5;
		l += data->c.size / 5;
	}
}

void	ft_clean(t_data *data)
{
	int	i;

	i = 0;
	while (data->a.arr[i] != data->c.arr[0])
		i++;
	while (data->a.arr[0] != data->c.arr[0])
	{
		if (i <= data->a.size - 1)
			rotate_a(data);
		else
			reverse_rotate_a(data);
	}
}

void	ft_chunky_sort(t_data *data)
{
	int	k;
	int	l;
	int	j;
	int	count;

	k = 0;
	l = (data->c.size / 11) - 1;
	while (data->a.size > 0)
	{
		count = 0;
		while (count < (data->c.size / 11) && data->a.size != 0)
		{
			j = ft_chunk_manager(data, k, l);
			ft_move_to_top(data, j);
			ft_check_push(data);
			count++;
		}
		k += data->c.size / 11;
		l += data->c.size / 11;
	}
}

void	ft_sort(t_data *data)
{
	if (data->a.size == 2)
		swap_a(data);
	else if (data->a.size <= 5)
		ft_smol_sort(data);
	else if (data->a.size > 5 && data->a.size <= 10)
		ft_thicc_sort(data);
	else if (data->a.size > 10 && data->a.size <= 100)
	{
		ft_thiccer_sort(data);
		ft_push_back_to_a(data);
		ft_clean(data);
	}
	else
	{
		ft_chunky_sort(data);
		ft_push_back_to_a(data);
		ft_clean(data);
	}
}

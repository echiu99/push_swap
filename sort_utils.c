/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echiu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 15:41:24 by echiu             #+#    #+#             */
/*   Updated: 2024/03/19 20:47:32 by echiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_get_right_pos(t_data *data)
{
	int	i;
	int	tmp;

	i = 0;
	while ((i < data->b.size - 1) && !(data->a.arr[0] < data->b.arr[i]
			&& data->a.arr[0] > data->b.arr[i + 1]))
		i++;
	if (i == data->b.size - 1)
	{
		if (data->a.arr[0] < data->b.arr[i] && data->a.arr[0]
			> data->b.arr[0])
			return ;
	}
	else if (data->a.arr[0] < data->b.arr[i] && data->a.arr[0]
		> data->b.arr[i + 1])
	{
		tmp = data->b.arr[i + 1];
		while (data->b.arr[0] != tmp)
		{
			if (i <= data->b.size / 2)
				rotate_b(data);
			else if (i > data->b.size / 2)
				reverse_rotate_b(data);
		}
	}
}

void	ft_check_push(t_data *data)
{
	if (data->b.size == 0)
		push_b(data);
	else
	{
		if (check_low(data) == 1)
			high_to_top(data);
		else if (check_high(data) == 1)
			high_to_top(data);
		else
			ft_get_right_pos(data);
		push_b(data);
	}
}

int	ft_fso(t_data *data, int i)
{
	if (i < data->a.size / 2)
		return (i);
	else
		return (data->a.size - i);
}

int	ft_chunk_manager(t_data *data, int k, int l)
{
	int	i;
	int	j;
	int	yes;

	i = 0;
	j = 0;
	yes = 0;
	while (i < data->a.size)
	{
		if ((data->a.arr[i] >= data->c.arr[k] && data->a.arr[i]
				<= data->c.arr[l]) && yes == 0)
		{
			j = i;
			yes++;
		}
		else if (data->a.arr[i] >= data->c.arr[k] && data->a.arr[i]
			<= data->c.arr[l])
		{
			if (ft_fso(data, j) > ft_fso(data, i))
				j = i;
		}
		i++;
	}
	return (j);
}

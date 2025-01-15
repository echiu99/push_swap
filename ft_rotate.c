/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echiu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 22:04:19 by echiu             #+#    #+#             */
/*   Updated: 2024/03/12 17:13:12 by echiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_data *data)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = data->a.arr[0];
	while (i < data->a.size)
	{
		data->a.arr[i] = data->a.arr[i + 1];
		i++;
	}
	data->a.arr[data->a.size - 1] = tmp;
	ft_printf("ra\n");
}

void	rotate_b(t_data *data)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = data->b.arr[0];
	while (i < data->b.size)
	{
		data->b.arr[i] = data->b.arr[i + 1];
		i++;
	}
	data->b.arr[data->b.size - 1] = tmp;
	ft_printf("rb\n");
}

void	rotate_both(t_data *data)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = data->a.arr[0];
	while (i < data->a.size)
	{
		data->a.arr[i] = data->a.arr[i + 1];
		i++;
	}
	data->a.arr[data->a.size - 1] = tmp;
	i = 0;
	tmp = data->b.arr[0];
	while (i < data->b.size)
	{
		data->b.arr[i] = data->b.arr[i + 1];
		i++;
	}
	data->b.arr[data->b.size - 1] = tmp;
	ft_printf("rr\n");
}

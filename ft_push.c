/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echiu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 22:00:26 by echiu             #+#    #+#             */
/*   Updated: 2024/03/12 17:10:30 by echiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_data *data)
{
	int	i;
	int	j;

	data->a.size++;
	data->b.size--;
	i = data->a.size;
	j = 0;
	while (i > 0)
	{
		data->a.arr[i] = data->a.arr[i - 1];
		i--;
	}
	data->a.arr[0] = data->b.arr[0];
	while (j < data->b.size)
	{
		data->b.arr[j] = data->b.arr[j + 1];
		j++;
	}
	ft_printf("pa\n");
}

void	push_b(t_data *data)
{
	int	i;
	int	j;

	data->b.size++;
	data->a.size--;
	i = data->b.size;
	j = 0;
	while (i > 0)
	{
		data->b.arr[i] = data->b.arr[i - 1];
		i--;
	}
	data->b.arr[0] = data->a.arr[0];
	while (j < data->a.size)
	{
		data->a.arr[j] = data->a.arr[j + 1];
		j++;
	}
	ft_printf("pb\n");
}

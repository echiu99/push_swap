/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echiu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 17:21:05 by echiu             #+#    #+#             */
/*   Updated: 2024/03/12 17:11:53 by echiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_data *data)
{
	int	tmp;

	if (data->a.size > 1)
	{
		tmp = data->a.arr[0];
		data->a.arr[0] = data->a.arr[1];
		data->a.arr[1] = tmp;
	}
	ft_printf("sa\n");
}

void	swap_b(t_data *data)
{
	int	tmp;

	if (data->b.size > 1)
	{
		tmp = data->b.arr[0];
		data->b.arr[0] = data->b.arr[1];
		data->b.arr[1] = tmp;
	}
	ft_printf("sb\n");
}

void	swap_both(t_data *data)
{
	int	tmp;

	if (data->a.size > 1)
	{
		tmp = data->a.arr[0];
		data->a.arr[0] = data->a.arr[1];
		data->a.arr[1] = tmp;
	}
	if (data->b.size > 1)
	{
		tmp = data->b.arr[0];
		data->b.arr[0] = data->b.arr[1];
		data->b.arr[1] = tmp;
	}
	ft_printf("ss\n");
}

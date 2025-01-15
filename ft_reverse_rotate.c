/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echiu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 22:14:58 by echiu             #+#    #+#             */
/*   Updated: 2024/03/12 17:17:56 by echiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_a(t_data *data)
{
	int	i;
	int	tmp;

	i = data->a.size - 1;
	tmp = data->a.arr[data->a.size - 1];
	while (i > 0)
	{
		data->a.arr[i] = data->a.arr[i - 1];
		i--;
	}
	data->a.arr[0] = tmp;
	ft_printf("rra\n");
}

void	reverse_rotate_b(t_data *data)
{
	int	i;
	int	tmp;

	i = data->b.size - 1;
	tmp = data->b.arr[data->b.size - 1];
	while (i > 0)
	{
		data->b.arr[i] = data->b.arr[i - 1];
		i--;
	}
	data->b.arr[0] = tmp;
	ft_printf("rrb\n");
}

void	reverse_rotate_both(t_data *data)
{
	int	i;
	int	tmp;

	i = data->a.size - 1;
	tmp = data->a.arr[data->a.size - 1];
	while (i > 0)
	{
		data->a.arr[i] = data->a.arr[i - 1];
		i--;
	}
	data->a.arr[0] = tmp;
	i = data->b.size - 1;
	tmp = data->b.arr[data->b.size - 1];
	while (i > 0)
	{
		data->b.arr[i] = data->b.arr[i - 1];
		i--;
	}
	data->b.arr[0] = tmp;
	ft_printf("rrr\n");
}

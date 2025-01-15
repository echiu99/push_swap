/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_stack_c.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echiu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 21:27:44 by echiu             #+#    #+#             */
/*   Updated: 2024/03/20 14:58:58 by echiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	quick_sort_c(t_data *data)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < (data->c.size - 1))
	{
		if (data->c.arr[i] > data->c.arr[i + 1])
		{
			tmp = data->c.arr[i];
			data->c.arr[i] = data->c.arr[i + 1];
			data->c.arr[i + 1] = tmp;
			i = 0;
		}
		else
			i++;
	}
}

void	ft_init_stack_c(t_data *data)
{
	int	i;

	i = 0;
	data->c.size = data->a.size;
	while (i < data->c.size)
	{
		data->c.arr[i] = data->a.arr[i];
		i++;
	}
	quick_sort_c(data);
}

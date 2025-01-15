/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echiu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 18:14:30 by echiu             #+#    #+#             */
/*   Updated: 2024/03/20 14:40:38 by echiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	high_to_top(t_data *data)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = data->b.arr[0];
	while (i < data->b.size)
	{
		if (data->b.arr[i] > tmp)
			tmp = data->b.arr[i];
		i++;
	}
	i = 0;
	while (data->b.arr[i] != tmp)
		i++;
	while (data->b.arr[0] != tmp)
	{
		if (i <= data->b.size / 2)
			rotate_b(data);
		if (i > data->b.size / 2)
			reverse_rotate_b(data);
	}
}

int	check_low(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->b.size)
	{
		if (data->a.arr[0] < data->b.arr[i])
			i++;
		else if (data->a.arr[0] > data->b.arr[i])
			return (0);
	}
	return (1);
}

int	check_high(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->b.size)
	{
		if (data->a.arr[0] > data->b.arr[i])
			i++;
		else if (data->a.arr[0] < data->b.arr[i])
			return (0);
	}
	return (1);
}

int	is_a_sorted(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->a.size - 1)
	{
		if (!(data->a.arr[i] < data->a.arr[i + 1]))
			return (1);
		i++;
	}
	return (0);
}

void	ft_check_too_long(char **str, int i, int you)
{
	int	j;

	if (!((ft_atol(str[i]) <= 2147483647)
			&& (ft_atol(str[i]) >= -2147483648)))
	{
		ft_putstr_fd("Error\n", 2);
		exit(EXIT_FAILURE);
	}
	j = 0;
	while (str[i][j])
	{
		if (j > 15)
		{
			ft_putstr_fd("Error\n", 2);
			if (you == 1)
				ft_free_char2(str);
			exit(EXIT_FAILURE);
		}
		j++;
	}
}

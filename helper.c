/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echiu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 22:32:05 by echiu             #+#    #+#             */
/*   Updated: 2024/03/18 17:15:33 by echiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_char2(char **tofree)
{
	int	i;

	i = 0;
	while (tofree[i])
		free(tofree[i++]);
	free(tofree);
	return ;
}

long	ft_atol(const char *str)
{
	long	n;
	long	i;
	long	num;

	i = 0;
	n = 1;
	num = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			n *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		num = num * 10 + (str[i] - 48);
		i++;
	}
	return (num * n);
}

void	ft_move_to_top(t_data *data, int i)
{
	int	tmp;

	if (data->a.size == 1)
		return ;
	tmp = data->a.arr[i];
	if (i <= data->a.size / 2)
	{
		while (data->a.arr[0] != tmp)
			rotate_a(data);
	}
	if (i > data->a.size / 2)
	{
		while (data->a.arr[0] != tmp)
			reverse_rotate_a(data);
	}
}

void	ft_push_back_to_a(t_data *data)
{
	while (data->b.size != 0)
		push_a(data);
}

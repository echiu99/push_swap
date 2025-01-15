/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chunky_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echiu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 16:02:56 by echiu             #+#    #+#             */
/*   Updated: 2024/03/18 17:21:07 by echiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

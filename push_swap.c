/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echiu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 18:35:50 by echiu             #+#    #+#             */
/*   Updated: 2024/03/20 14:42:09 by echiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	checker(char **str, int i, int you)
{
	int	j;
	int	count;

	j = 0;
	count = 0;
	while (str[i][j])
	{
		if (str[i][j] == '-' && count <= 1)
		{
			count++;
			j++;
		}
		if (!(str[i][j] >= '0' && str[i][j] <= '9')
				&& str[i][j] != '\0' && str[i][j] != ' ')
		{
			ft_putstr_fd("Error\n", 2);
			if (you == 1)
				ft_free_char2(str);
			exit(EXIT_FAILURE);
		}
		j++;
	}
	ft_check_too_long(str, i, you);
	return (0);
}

int	check_dup(t_data *data)
{
	int	i;
	int	j;

	i = 0;
	while (i < data->a.size - 1)
	{
		j = i + 1;
		while (data->a.arr[i] != data->a.arr[j]
			&& j != data->a.size - 1)
			j++;
		if (data->a.arr[i] == data->a.arr[j]
			&& j <= data->a.size - 1)
			return (1);
		i++;
	}
	return (0);
}

void	init_stack_mlt_param(t_data *data, char **argv)
{
	int	i;

	i = 1;
	while (argv[i])
	{
		checker(argv, i, 0);
		data->a.arr[i - 1] = ft_atoi(argv[i]);
		i++;
	}
	data->a.size = i - 1;
}

void	init_stacks(t_data *data, char *str)
{
	int		i;
	char	**ret;

	i = 0;
	ret = ft_split(str, ' ');
	while (ret[i])
		i++;
	data->a.arr[i + 1] = 0;
	data->a.size = i;
	i = 0;
	while (ret[i])
	{
		checker(ret, i, 1);
		data->a.arr[i] = ft_atoi(ret[i]);
		i++;
	}
	ft_free_char2(ret);
}

int	main(int argc, char **argv)
{
	t_data	data;

	if (argc < 2)
		return (0);
	data.b.size = 0;
	data.c.size = 0;
	data.b.index = 0;
	data.c.index = 0;
	if (argc == 2)
		init_stacks(&data, argv[1]);
	if (argc > 2)
		init_stack_mlt_param(&data, argv);
	if (check_dup(&data) == 1)
	{
		ft_putstr_fd("Error\n", 2);
		exit(EXIT_FAILURE);
	}
	if (is_a_sorted(&data) == 0)
		return (0);
	ft_init_stack_c(&data);
	ft_sort(&data);
	return (0);
}

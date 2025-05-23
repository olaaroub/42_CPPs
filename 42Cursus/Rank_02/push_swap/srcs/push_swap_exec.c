/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_exec.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrimah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 16:43:32 by yrimah            #+#    #+#             */
/*   Updated: 2023/01/08 16:43:49 by yrimah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

static void	loop_rotate_a(t_program *ps, int *cost_stack_a)
{
	while (*(cost_stack_a))
	{
		if (*(cost_stack_a) > 0)
			*(cost_stack_a) -= rotate_a(ps, 1);
		else if (*(cost_stack_a) < 0)
			*(cost_stack_a) += reverse_rotate_a(ps, 1);
	}
}

static void	loop_rotate_b(t_program *ps, int *cost_stack_b)
{
	while (*(cost_stack_b))
	{
		if (*(cost_stack_b) > 0)
			*(cost_stack_b) -= rotate_b(ps, 1);
		else if (*(cost_stack_b) < 0)
			*(cost_stack_b) += reverse_rotate_b(ps, 1);
	}
}

void	ft_exec_move(struct s_find_move ret)
{
	if (ret.cost_stack_a < 0 && ret.cost_stack_b < 0)
	{
		while (ret.cost_stack_a < 0 && ret.cost_stack_b < 0)
		{
			reverse_rotate_ab(ret.ps, 1);
			(ret.cost_stack_a)++;
			(ret.cost_stack_b)++;
		}
	}
	else if (ret.cost_stack_a > 0 && ret.cost_stack_b > 0)
	{
		while (ret.cost_stack_a > 0 && ret.cost_stack_b > 0)
		{
			rotate_ab(ret.ps, 1);
			(ret.cost_stack_a)--;
			(ret.cost_stack_b)--;
		}
	}
	loop_rotate_a(ret.ps, &ret.cost_stack_a);
	loop_rotate_b(ret.ps, &ret.cost_stack_b);
	push_a(ret.ps, 1);
}

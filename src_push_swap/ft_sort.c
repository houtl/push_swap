/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <thou@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 20:59:28 by thou              #+#    #+#             */
/*   Updated: 2018/04/04 11:50:37 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		reverse_op(t_pile *pile, int op)
{
	if (op == 4)
		op = 5;
	else if (op == 5)
		op = 4;
	else if (op >= 5 && op <= 7)
		op = op + 3;
	else if (op >= 8 && op <= 10)
		op = op - 3;
	return (operation(pile, op));
}

void	drop_last(t_pile *pile)
{
	t_lst	*rst;

	rst = pile->tmp;
	if (rst)
	{
		if (!rst->next)
		{
			reverse_op(pile, rst->content);
			rst = NULL;
		}
		else
		{
			while (rst && rst->next)
				rst = rst->next;
			reverse_op(pile, rst->next->content);
			rst->next = NULL;
		}
	}
}

int		sort_check(t_pile *pile, int deep)
{
	t_lst	tmp;

	if (deep == 0)
	{
		tmp = pile->a;
		while (tmp && tmp->next)
		{
			if (tmp->content > tmp->next->content)
				pile->eva++;
			tmp = tmp->next;
		}
	}
	if (pile->eva == pile.n - 1)
	{
		pile->deep_max = deep;
		pile->rst = pile->tmp;
		return (1);
	}
	else
		return (0);
}

int		ft_sort(t_pile *pile, int deep)
{
	int		op;

	if (deep >= pile->deep_max)
	{
		drop_last(pile);
		return (0);
	}
	if (sort_check(pile, deep) == 1)
		return (0);
	op = -1;
	while (op < 11)
	{
		operation(pile, op);


}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <thou@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 20:59:28 by thou              #+#    #+#             */
/*   Updated: 2018/04/04 22:28:55 by thou             ###   ########.fr       */
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

int		drop_last(t_pile *pile)
{
	t_lst	*rst;
	int		i;

	rst = pile->tmp;
	if (rst)
	{
		if (!rst->next)
		{
			i = reverse_op(pile, rst->content);
			free(rst);
			rst = NULL;
		}
		else
		{
			while (rst->next && rst->next->next)
				rst = rst->next;
			i = reverse_op(pile, rst->next->content);
			free(rst->next);
			rst->next = NULL;
		}
	}
	return (i);
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
	int		eval;

	if (deep >= pile->deep_max)
	{
		pile->eva += drop_last(pile);
		return (0);
	}
	if (sort_check(pile, deep) == 1)
		return (0);
	op = -1;
	while (++op < 11)
	{
		eval = operation(pile, op);
		if (eval >= 0)
		{
			pile->eva += eval;
			ft_add_last(&(pile->tmp), ft_new(op));
			ft_sort(pile, deep + 1);
		}
		else
			reverseop(pile, op);
	}
	pile->eva += drop_last(pile);
}

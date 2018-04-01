/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <thou@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 20:59:28 by thou              #+#    #+#             */
/*   Updated: 2018/04/02 01:04:45 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_op(t_pile *pile, char *op)
{
	char	str[4];

	if (op[2] != 0)
	{
		str[0] = 'r';
		str[1] = op[2];


void	drop_last(t_pile *pile)
{
	t_rst	*rst;

	rst = pile->tmp;
	if (rst)
	{
		if (!rst->next)
		{
			reverse_op(pile, rst->op);
			rst = NULL;
		}
		else
		{
			while (rst && rst->next)
				rst = rst->next;
			reverse_op(pile, rst->next->op);
			rst->next = NULL;
		}
	}
}

int		ft_sort(t_pile *pile, int deep)
{
	if (deep >= pile->deep_max)
	{
		drop_last(pile);
		return(0);
	}
	
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <thou@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 20:59:28 by thou              #+#    #+#             */
/*   Updated: 2018/04/09 18:36:29 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		sort_check(t_pile *pile)
{
	t_lst	*tmp;

	if (pile->b != NULL)
		return -1;
	tmp = pile->a;
	while (tmp && tmp->next)
	{
		if (tmp->n < tmp->next->n)
			return -1;
		tmp = tmp->next;
	}
	return 1;
}

int		find_m(t_pile *pile, int z)
{
	int		*i;
	int		max;
	t_lst	*tmp;

	max = 0;
	tmp = pile->a;
	i = ft_listtoarr(pile->a, &i, z);
	return (i[z / 2]);
}



int		partition_a(t_pile *pile, int size)
{
	int		m;
	int		count;
	int		j;
	int		f;
	

	f = 0;
	j = 0;
	count = 0;
	m = find_m(pile, size);
	if (count_lst_len(pile->b) != 0)
		f = 1;
	while (m_small(pile->a, m))
		if (pile->a->n < m)
		{
			operation(pile, 4);
			count++;
		}
		else
		{
			j++;
			operation(pile, 5);
		}
	a_back_ra_rra(pile, f, j);
	return (count);
}

void		ft_sort(t_pile *pile, int size)
{
	int		n;

	if (size == 1 || sort_check(pile) == 1)
		return ;
	if (size > 3)
	{
		n = partition_a(pile, size);
		ft_sort(pile, size - n);
		ft_sort2(pile, n);
		move_back_a(pile, n);
	}
	else if (size > 1)
	{
		sort_simple_a(pile, size);
	}
}

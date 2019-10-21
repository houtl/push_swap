/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverota.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 12:19:05 by thou              #+#    #+#             */
/*   Updated: 2018/04/04 23:45:28 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_rra(t_pile *pile)
{
	t_lst	*tmp;
	int		i;

	if (pile->a == NULL || pile->a->next == NULL)
		return ;
	tmp = pile->a;
	while (tmp->next->next)
		tmp = tmp->next;
	tmp->next->next = pile->a;
	pile->a = tmp->next;
	tmp->next = NULL;
}

int		ft_rrb(t_pile *pile)
{
	t_lst	*tmp;
	int		i;

	if (pile->b == NULL || pile->b->next == NULL)
		return ;
	tmp = pile->b;
	while (tmp->next->next)
		tmp = tmp->next;
	tmp->next->next = pile->b;
	pile->b = tmp->next;
	tmp->next = NULL;
}

int		ft_reverota(char *str, t_pile *pile)
{
	if (ft_strcmp(str, "rra") == 0)
		ft_rra(pile);
	else if (ft_strcmp(str, "rrb") == 0)
		ft_rrb(pile);
	else
	{
		ft_rra(pile);
		ft_rrb(pile);
	}
}

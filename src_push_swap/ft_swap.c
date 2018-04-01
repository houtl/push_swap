/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 15:11:11 by thou              #+#    #+#             */
/*   Updated: 2018/04/01 19:30:23 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_pile *pile)
{
	t_lst	*tmp;

	if (pile->a == NULL || pile->a->next == NULL)
		return ;
	tmp = pile->a->next;
	pile->a->next = pile->a->next->next;
	ft_add(&(pile->a), tmp);
}

void	ft_sb(t_pile *pile)
{
	t_lst	*tmp;

	if (pile->b == NULL || pile->b->next == NULL)
		return ;
	tmp = pile->b->next;
	pile->b->next = pile->b->next->next;
	ft_add(&(pile->b), tmp);
}

void	ft_swap(char *str, t_pile *pile)
{
	if (ft_strcmp(str, "sa") == 0)
		ft_sa(pile);
	else if (ft_strcmp(str, "sb") == 0)
		ft_sb(pile);
	else if (ft_strcmp(str, "ss") == 0)
	{
		ft_sa(pile);
		ft_sb(pile);
	}
	else
		ft_error(ERROR);
}

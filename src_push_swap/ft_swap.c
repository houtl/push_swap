/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 15:11:11 by thou              #+#    #+#             */
/*   Updated: 2018/04/03 21:18:36 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_sa(t_pile *pile)
{
	t_lst	*tmp;

	if (pile->a == NULL || pile->a->next == NULL)
		return (0);
	tmp = pile->a->next;
	pile->a->next = pile->a->next->next;
	ft_add(&(pile->a), tmp);
	if (pile->a->content < pile->a->next->content)
		return (1);
	else
		return (0);
}

int		ft_sb(t_pile *pile)
{
	t_lst	*tmp;

	if (pile->b == NULL || pile->b->next == NULL)
		return ;
	tmp = pile->b->next;
	pile->b->next = pile->b->next->next;
	ft_add(&(pile->b), tmp);
	if (pile->b->content > pile->b->next->content)
		return (1);
	else
		return (0);
}

int		ft_swap(char *str, t_pile *pile)
{
	if (ft_strcmp(str, "sa") == 0)
		return (ft_sa(pile));
	else if (ft_strcmp(str, "sb") == 0)
		return (ft_sb(pile));
	else if (ft_strcmp(str, "ss") == 0)
		return (ft_sa(pile) + ft_sb(pile));
	else
		return (-1);
}

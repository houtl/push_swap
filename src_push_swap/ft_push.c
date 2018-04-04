/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 15:47:32 by thou              #+#    #+#             */
/*   Updated: 2018/04/04 23:43:52 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_pa(t_pile *pile)
{
	t_lst	*tmp;
	int		i;

	if (pile->b == NULL)
		return (0);
	tmp = pile->b;
	pile->b = pile->b->next;
	ft_add(&(pile->a), tmp);
	i = (pile->a->content > pile->b->content) ? -1 : 0;
	i += (pile->a->content < pile->a->next->content) ? 1 : 0;
	return (i);
}

int		ft_pb(t_pile *pile)
{
	t_lst	*tmp;
	int		i;

	if (pile->a == NULL)
		return (0);
	tmp = pile->a;
	pile->a = pile->a->next;
	ft_add(&(pile->b), tmp);
	i = (pile->a->content > pile->b->content) ? -1 : 0;
	i += (pile->b->content < pile->b->next->content) ? 1 : 0;
	return (i);
}

int		ft_push(char *str, t_pile *pile)
{
	if (ft_strcmp(str, "pa") == 0)
		return (ft_pa(pile));
	if (ft_strcmp(str, "pb") == 0)
		return (ft_pb(pile));
	return (-1);
}

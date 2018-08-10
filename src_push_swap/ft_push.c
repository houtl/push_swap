/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 15:47:32 by thou              #+#    #+#             */
/*   Updated: 2018/08/10 17:42:04 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_pa(t_pile *pile)
{
	t_lst	*tmp;
	int		i;

	if (pile->b == NULL)
		return (-1);
	tmp = pile->b;
	pile->b = pile->b->next;
	ft_add(&(pile->a), tmp);
//	i = (pile->a && pile->b && pile->a->content > pile->b->content) ? -1 : 0;
//	i += (pile->a && pile->a->next && pile->a->content < pile->a->next->content) ? 1 : 0;
	return (0);
}

int		ft_pb(t_pile *pile)
{
	t_lst	*tmp;
	int		i;

	if (pile->a == NULL)
		return (-1);
	tmp = pile->a;
	pile->a = pile->a->next;
	ft_add(&(pile->b), tmp);
	i = (pile->a && pile->b && pile->a->content > pile->b->content) ? -1 : 0;
	i += (pile->b && pile->b->next && pile->b->content < pile->b->next->content) ? 1 : 0;
	return (0);
}

int		ft_push(char *str, t_pile *pile)
{
	if (ft_strcmp(str, "pa") == 0)
		return (ft_pa(pile));
	if (ft_strcmp(str, "pb") == 0)
		return (ft_pb(pile));
	return (-1);
}

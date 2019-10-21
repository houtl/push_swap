/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 15:47:32 by thou              #+#    #+#             */
/*   Updated: 2019/10/19 21:15:00 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_pa(t_pile *pile)
{
	t_lst	*tmp;
	int		i;

	if (pile->b == NULL)
		return ;
	tmp = pile->b;
	pile->b = pile->b->next;
	ft_add(&(pile->a), tmp);
}

int		ft_pb(t_pile *pile)
{
	t_lst	*tmp;

	if (pile->a == NULL)
		return ;
	tmp = pile->a;
	pile->a = pile->a->next;
	ft_add(&(pile->b), tmp);
}

int		ft_push(char *str, t_pile *pile)
{
	if (ft_strcmp(str, "pa") == 0)
		ft_pa(pile);
	if (ft_strcmp(str, "pb") == 0)
		ft_pb(pile);
}

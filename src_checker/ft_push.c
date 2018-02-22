/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 15:47:32 by thou              #+#    #+#             */
/*   Updated: 2018/02/22 12:56:53 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_pa(t_pile *pile)
{
	t_list	*tmp;

	if (pile->b == NULL)
		return ;
	tmp = pile->b;
	pile->b = pile->b->next;
	ft_lstadd(&(pile->a), tmp);
}

void	ft_pb(t_pile *pile)
{
	t_list	*tmp;

	if (pile->a == NULL)
		return ;
	tmp = pile->a;
	pile->a = pile->a->next;
	ft_lstadd(&(pile->b), tmp);
}

void	ft_push(char *str, t_pile *pile)
{
	if (ft_strcmp(str, "pa") == 0)
		ft_pa(pile);
	if (ft_strcmp(str, "pb") == 0)
		ft_pb(pile);
}

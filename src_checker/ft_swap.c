/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 15:11:11 by thou              #+#    #+#             */
/*   Updated: 2018/02/22 10:28:04 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_sa(char *str, t_pile *pile)
{
	t_list	*tmp;

	if (pile->a == NULL || pile->a->next == NULL)
		return ;
	tmp = pile->a->next;
	pile->a->next = pile->a->next->next;
	ft_lstadd(pile->a, tmp);
}

void	ft_sb(t_pile *pile)
{
	t_list	*tmp;

	if (pile->b == NULL || pile->b->next == NULL)
		return ;
	tmp = pile->b->next;
	pile->b->next = pile->b->next->next;
	ft_lstadd(pile->b, tmp);
}

void	ft_swap(char *str, t_pile *pile)
{
	if (ft_strcmp(str, "sa\n") == 0)
		ft_sa(pile);
	else if (ft_strcmp(str, "sb\n") == 0)
		ft_sb(pile);
	else if (ft_strcmp(str, "ss\n") == 0)
	{
		ft_sa(pile);
		ft_sb(pile);
	}
	else
		ft_error(ERROR);
}

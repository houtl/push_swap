/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 10:45:35 by thou              #+#    #+#             */
/*   Updated: 2018/02/22 16:18:32 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_ra(t_pile *pile)
{
	t_lst	*list;
	t_lst	*tmp;

	if (pile->a == NULL || pile->a->next == NULL)
		return ;
	list = pile->a;
	while (list->next)
		list = list->next;
	tmp = pile->a;
	pile->a = pile->a->next;
	tmp->next = NULL;
	list->next = tmp;
}

void	ft_rb(t_pile *pile)
{
	t_lst	*list;
	t_lst	*tmp;

	if (pile->b == NULL || pile->b->next == NULL)
		return ;
	list = pile->b;
	while (list->next)
		list = list->next;
	tmp = pile->b;
	pile->b = pile->b->next;
	tmp->next = NULL;
	list->next = tmp;
}

void	ft_rotate(char *str, t_pile *pile)
{
	if (ft_strcmp(str, "ra") == 0)
		ft_ra(pile);
	else if (ft_strcmp(str, "rb") == 0)
		ft_rb(pile);
	else if (ft_strcmp(str, "rr") == 0)
	{
		ft_ra(pile);
		ft_rb(pile);
	}
	else
		ft_error(ERROR);
}

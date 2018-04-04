/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 10:45:35 by thou              #+#    #+#             */
/*   Updated: 2018/04/03 22:22:24 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_ra(t_pile *pile)
{
	t_lst	*list;
	t_lst	*tmp;

	if (pile->a == NULL || pile->a->next == NULL)
		return (0);
	list = pile->a;
	while (list->next)
		list = list->next;
	i = (pile->a->content < pile->a->next->content) ? -1 : 0;
	tmp = pile->a;
	pile->a = pile->a->next;
	tmp->next = NULL;
	list->next = tmp;
	i += (list->content < list->next->content) ? 1 : 0;
	return (i);
}

int		ft_rb(t_pile *pile)
{
	t_lst	*list;
	t_lst	*tmp;
	int		i;

	if (pile->b == NULL || pile->b->next == NULL)
		return (0);
	list = pile->b;
	while (list->next)
		list = list->next;
	i = (pile->b->content > pile->b->next->content) ? -1 : 0;
	tmp = pile->b;
	pile->b = pile->b->next;
	tmp->next = NULL;
	list->next = tmp;
	i += (list->content > list->next->content) ? 1 : 0;
	return (i);
}

int		ft_rotate(char *str, t_pile *pile)
{
	if (ft_strcmp(str, "ra") == 0)
		return (ft_ra(pile));
	else if (ft_strcmp(str, "rb") == 0)
		return (ft_rb(pile));
	else if (ft_strcmp(str, "rr") == 0)
		return (ft_ra(pile) + ft_rb(pile);
	else
		return (-1);;
}

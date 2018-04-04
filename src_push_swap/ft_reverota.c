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
		return (0);
	tmp = pile->a;
	while (tmp->next->next)
		tmp = tmp->next;
	i = (tmp->content < tmp->next->content) ? -1 : 0;
	tmp->next->next = pile->a;
	pile->a = tmp->next;
	i += (tmp->next->content < tmp->next->next->content) ? 1 : 0;
	tmp->next = NULL;
	return (i);
}

int		ft_rrb(t_pile *pile)
{
	t_lst	*tmp;
	int		i;

	if (pile->b == NULL || pile->b->next == NULL)
		return (0);
	tmp = pile->b;
	while (tmp->next->next)
		tmp = tmp->next;
	i = (tmp->content > tmp->next->content) ? -1 : 0;
	tmp->next->next = pile->b;
	pile->b = tmp->next;
	i += (tmp->next->content > tmp->next->next->content) ? 1 : 0;
	tmp->next = NULL;
	return (i);
}

int		ft_reverota(char *str, t_pile *pile)
{
	if (ft_strcmp(str, "rra") == 0)
		return (ft_rra(pile));
	else if (ft_strcmp(str, "rrb") == 0)
		return (ft_rrb(pile));
	else if (ft_strcmp(str, "rrr") == 0)
		return (ft_rra(pile) + ft_rrb(pile));
	else
		return (-1);
}

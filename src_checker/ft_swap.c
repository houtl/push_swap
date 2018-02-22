/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 15:11:11 by thou              #+#    #+#             */
/*   Updated: 2018/02/20 15:47:05 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_sa(char *str, t_pile *pile)
{
	int		i;

	if (pile->a[0] == 0)
		return ;
	if (pile->a[1] == 0)
		return ;
	i = pile->a[0];
	pile->a[0] = pile->a[1];
	pile->a[1] = i;
}

void	ft_sb(t_pile *pile)
{
	int		i;
	if (pile->b[0] == 0)
		return ;
	if (pile->b[1] == 0)
		return ;
	i = pile->b[0];
	pile->b[0] = pile->b[1];
	pile->b[1] = i;
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

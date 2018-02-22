/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <thou@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 01:54:07 by thou              #+#    #+#             */
/*   Updated: 2018/02/22 16:18:18 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_check_error(char *str)
{
	int		i;

	i = -1;
	while (str[++i] != 0)
	{
		if (i == 0 && str[i] != '-' && ft_isdigit(str[i]) == 0)
			ft_error(ERROR);
		else if (i != 0 && ft_isdigit(str[i]) == 0)
			ft_error(ERROR);
	}
	if (ft_isint(str) == 0)
		ft_error(ERROR);
}

void	ft_verifier(t_pile *pile)
{
	int		i;
	t_lst	*tmp;

	tmp = pile->a;
	if (pile->b)
		ft_error(KO);
	i = 0;
	while (tmp && tmp->next)
	{
		if (tmp->content < tmp->next->content)
			ft_error(KO);
		tmp = tmp->next;
	}
	ft_error(OK);
}

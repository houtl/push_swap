/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ok.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <thou@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 01:54:07 by thou              #+#    #+#             */
/*   Updated: 2018/02/22 10:24:00 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_verifier(t_pile *pile)
{
	int		i;
	t_list	**tmp;

	tmp = pilt->a;
	if (pile->b != NULL)
		ft_error(ERROR);
	i = 0;
	while (tmp != NULL || tmp->next != NULL)
	{
		if (tmp->content < tmp->next->content)
			ft_error(KO);
		tmp = tmp->next;
	}
	ft_error(OK);
}

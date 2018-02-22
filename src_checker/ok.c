/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ok.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <thou@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 01:54:07 by thou              #+#    #+#             */
/*   Updated: 2018/02/22 13:29:17 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_verifier(t_pile *pile)
{
	int		i;
	t_list	*tmp;

	tmp = pile->a;
	if (pile->b)
		ft_error(KO);
	i = 0;
	while (tmp && tmp->next)
	{
		if (tmp->content_size < tmp->next->content_size)
			ft_error(KO);
		tmp = tmp->next;
	}
	ft_error(OK);
}

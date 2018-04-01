/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 17:06:59 by thou              #+#    #+#             */
/*   Updated: 2018/04/01 19:28:16 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_printab(t_pile *pile)
{
	t_lst	*tmp;

	tmp = pile->a;
	ft_printf("******************************\n***");
	while (tmp)
	{
		ft_printf("%d ", tmp->content);
		tmp = tmp->next;
	}
	ft_printf("\n***");
	tmp = pile->b;
	while (tmp)
	{
		ft_printf("%d ", tmp->content);
		tmp = tmp->next;
	}
	ft_printf("\n");
	ft_printf("******************************\n");
}

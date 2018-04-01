/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 16:19:15 by thou              #+#    #+#             */
/*   Updated: 2018/04/01 19:30:59 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_add(t_lst **lst, t_lst *new)
{
	new->next = *lst;
	*lst = new;
}

t_lst	*ft_new(int const content)
{
	t_lst	*dst;

	dst = (t_lst*)malloc(sizeof(t_lst));
	if (dst == NULL)
		return (NULL);
	dst->content = content;
	dst->next = NULL;
	return (dst);
}

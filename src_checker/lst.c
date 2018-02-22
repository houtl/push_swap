/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 16:19:15 by thou              #+#    #+#             */
/*   Updated: 2018/02/22 16:30:01 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

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

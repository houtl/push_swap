/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 16:19:15 by thou              #+#    #+#             */
/*   Updated: 2018/04/04 23:46:02 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_lst(t_lst **lst)
{
	t_lst	*tmp;

	while (*lst)
	{
		tmp = *lst;
		*lst = (*lst)->next;
		free(tmp);
	}
}

void	ft_add_last(t_lst **lst, t_lst *new)
{
	t_lst	*tmp;

	tmp = *lst;
	if (!tmp)
		*lst = new;
	else
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
}

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

int		count_lst_len(t_lst *lst)
{
	t_lst	*tmp;
	int		len;

	tmp = lst;
	len = 0;
	while (tmp)
	{
		tmp = tmp->next;
		len++;
	}
	return (len++);
}

int		

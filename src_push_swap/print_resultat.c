/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_resultat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <thou@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 20:37:26 by thou              #+#    #+#             */
/*   Updated: 2018/04/05 22:33:39 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_resultat(t_lst *rst, char **tab)
{
	ft_putendl("aaaaaa");
	while (rst)
	{
		ft_putendl(tab[rst->content]);
		rst = rst->next;
	}
}

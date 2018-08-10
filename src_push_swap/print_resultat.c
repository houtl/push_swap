/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_resultat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <thou@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 20:37:26 by thou              #+#    #+#             */
/*   Updated: 2018/04/09 18:01:49 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_resultat(t_lst *rst, char **tab)
{
	while (rst)
	{
		ft_putendl("aaaaaa");
		ft_putendl(tab[rst->content]);
		ft_putendl("aaaaaa");
		rst = rst->next;
		ft_putendl("aaaaaa");
	}
}

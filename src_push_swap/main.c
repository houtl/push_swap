/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <thou@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/04 15:28:05 by thou              #+#    #+#             */
/*   Updated: 2018/04/01 21:04:55 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(char *str)
{
	ft_putendl(str);
	exit(0);
}

void	ft_read(char **av, t_pile *pile, int i)
{
	char	*str;
	t_lst	*tmp;
	int		n;

	pile->a = NULL;
	pile->b = NULL;
	while (i > 0)
	{
		str = av[i];
		ft_check_error(str);
		n = ft_atoi(str);
		tmp = ft_new(n);
		ft_add(&pile->a, tmp);
		i--;
	}
	ft_checkdouble(pile);
}

int		main(int ac, char **av)
{
	t_pile	pile;

	if (ac < 2)
		exit(0);
	pile.n = ac - 1;
	pile.deep_max = 10 * pile.n;
	ft_read(av, &pile, pile.n);
	ft_sort(&pile, 0);
	print_resultat(pile.resultat);
	return (0);
}

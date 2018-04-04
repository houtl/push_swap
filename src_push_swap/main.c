/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <thou@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/04 15:28:05 by thou              #+#    #+#             */
/*   Updated: 2018/04/03 00:07:18 by thou             ###   ########.fr       */
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

void		init_Pile(t_pile *pile)
{
	pile.tab = {sa, sb, ss, pa, pb, ra, rb, rr, rra, rrb, rrr};
	pile.deep_max = 10 * pile.n;
	pile.eva = 0;
}

int		operation(t_pile *pile, int i)
{
	if (i >=0 && i <= 2)
		return (ft_swap(pile->tab[i], pile));
	else if (i == 3 || i == 4)
		return (ft_push(pile->tab[i], pile));
	else if (i >= 5 && i <= 7)
		return (ft_rotate(pile->tab[i], pile));
	else if (i >= 8 && i <= 10)
		return (ft_reverota(pile->tab[i], pile));
	else
		ft_error(ERROR);
	return (-1);
}

int		main(int ac, char **av)
{
	t_pile	pile;

	if (ac < 2)
		exit(0);
	pile.n = ac - 1;
	ft_read(av, &pile, pile.n);
	ft_sort(&pile, 0);
	print_resultat(pile.resultat, pile.tab);
	return (0);
}

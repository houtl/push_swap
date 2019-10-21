/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <thou@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/04 15:28:05 by thou              #+#    #+#             */
/*   Updated: 2018/04/09 18:00:07 by thou             ###   ########.fr       */
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

void		init_pile(t_pile *pile)
{
	pile->tab = (char**)malloc(sizeof(char*) * 12);
	pile->tab[0] = "sa";
	pile->tab[1] = "sb";
	pile->tab[2] = "ss";
	pile->tab[3] = "pa";
	pile->tab[4] = "pb";
	pile->tab[5] = "ra";
	pile->tab[6] = "rb";
	pile->tab[7] = "rr";
	pile->tab[8] = "rra";
	pile->tab[9] = "rrb";
	pile->tab[10] = "rrr";
	pile->tab[11] = NULL;
	pile->deep_max = 10 * pile->n;
	pile->eva = 0;
	pile->tmp = NULL;
	pile->rst = NULL;
}

void	operation(t_pile *pile, int i)
{
	if (i >=0 && i <= 2)
		ft_swap(pile->tab[i], pile);
	else if (i == 3 || i == 4)
		ft_push(pile->tab[i], pile);
	else if (i >= 5 && i <= 7)
		ft_rotate(pile->tab[i], pile);
	else if (i >= 8 && i <= 10)
		ft_reverota(pile->tab[i], pile);
	else
		ft_error(ERROR);
	ft_add_last(&(pile->rst), ft_new(i));
}

int		main(int ac, char **av)
{
	t_pile	pile;

	if (ac < 2)
		exit(0);
	pile.n = ac - 1;
	init_pile(&pile);
	ft_read(av, &pile, pile.n);
	if (pile.n == 2)
		pile.a->n > pile.a->next->n ? operation(&pile, 0) : 0;
	ft_sort(&pile, pile.n);
	print_resultat(pile.rst, pile.tab);
	return (0);
}

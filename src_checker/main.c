/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <thou@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/04 15:28:05 by thou              #+#    #+#             */
/*   Updated: 2018/02/22 17:34:03 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_error(char *str)
{
	ft_putendl(str);
	exit(0);
}

void	ft_read(char **av, t_pile *pile, int i)
{
	char	*str;
	t_lst	*tmp;
	t_lst	*lst;
	int		n;

	pile->a = NULL;
	pile->b = NULL;
	while (i > 0)
	{
		str = av[i];
		ft_check_error(str);
		n = ft_atoi(str);
		tmp = ft_new(n);
		if (pile->a == NULL)
		{
			lst = tmp;
			pile->a = lst;
		}
		else
		{
			lst->next = tmp;
			lst = lst->next;
		}
		i--;
	}
}

void	ft_tri(t_pile *pile)
{
	char	*str;
	char	*line;

	while (get_next_line(0, &line) > 0)
	{
		str = line;
		if (ft_strcmp(line, "sa") == 0 || ft_strcmp(line, "sb") == 0
				|| ft_strcmp(line, "ss") == 0)
			ft_swap(str, pile);
		else if (ft_strcmp(line, "pa") == 0 || ft_strcmp(line, "pb") == 0)
			ft_push(str, pile);
		else if (ft_strcmp(line, "ra") == 0 || ft_strcmp(line, "rb") == 0
				|| ft_strcmp(line, "rr") == 0)
			ft_rotate(str, pile);
		else if (ft_strcmp(line, "rra") == 0 || ft_strcmp(line, "rrb") == 0
				|| ft_strcmp(line, "rrr") == 0)
			ft_reverota(str, pile);
		else
			ft_error(ERROR);
		free(line);
		ft_printab(pile);
	}
}

int		main(int ac, char **av)
{
	t_pile	pile;

	if (ac < 2)
		exit(0);
	pile.n = ac - 1;
	ft_read(av, &pile, pile.n);
	ft_tri(&pile);
	ft_verifier(&pile);
	return (0);
}

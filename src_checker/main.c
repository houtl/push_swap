/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <thou@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/04 15:28:05 by thou              #+#    #+#             */
/*   Updated: 2018/02/20 02:39:01 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_error(char *str)
{
	ft_putendl(str);
	exit(0);
}

void	ft_read(t_pile *pile)
{
	char	*str;
	int		i;

	while (++pile->n < ac - 1)
	{
		str = av[pile->n + 1];
		i = -1;
		while (str[++i] != 0)
		{
			if (ft_isnb(str[i]) == 0)
				ft_error(ERROR);
		}
		pile->a[pile->n] = ft_atoi(str);
	}
}

void	ft_tri(t_pile *pile)
{
	char	*str;
	char	*line;

	while (get_next_line(0, &line) > 0)
	{
		str = line;
		if (ft_strcmp(line, "sa\n") == 0 || ft_strcmp(line, "sb\n") == 0
				|| ft_strcmp(line, "ss\n") == 0)
			ft_swap(str, pile);
		else if (ft_strcmp(line, "pa\n") == 0 || ft_strcmp(line, "pb\n") == 0)
			ft_push(str, pile);
		else if (ft_strcmp(line, "ra\n") == 0 || ft_strcmp(line, "rb\n") == 0
				|| ft_strcmp(line, "rr\n") == 0)
			ft_rotate(str, pile);
		else if (ft_strcmp(line, "rra\n") == 0 || ft_strcmp(line, "rrb\n") == 0
				|| ft_strcmp(line, "rrr\n") == 0)
			ft_reverota(str, pile);
		else
			ft_error("parametre pas correct");
		free(line);
	}
}

int		main(int ac, char **av)
{
	char	*line;
	t_pile	pile;

	if (ac < 2)
		ft_error(ERROR);
	pile.n = -1;
	pile.a = (char**)malloc(sizeof(char*) * (ac));
	pile.b = (char**)malloc(sizeof(char*) * (ac));
	ft_read(&pile);
	ft_tri(&pile);
	ft_verifier(&pile);
	return (0);
}

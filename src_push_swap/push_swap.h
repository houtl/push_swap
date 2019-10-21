/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <thou@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 20:46:42 by thou              #+#    #+#             */
/*   Updated: 2018/04/01 20:46:42 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"

# define ERROR	"Error"
# define OK		"OK"
# define KO		"KO"

typedef struct		s_lst
{
	int				n;
	struct s_lst	*next;
}					t_lst;

typedef struct		s_pile
{
	t_lst			*a;
	t_lst			*b;
	t_lst			*rst;
	t_lst			*tmp;
	int				n;
	int				deep_max;
	int				eva;
	char			**tab;
	int				*i;
}					t_pile;

typedef struct		var
{
	long long int	*arr;
	long long int	piv;
	int				i;
	int				count;
	int				countpab;
};					var;


void				ft_sort(t_pile *pile, int size);
void				print_resultat(t_lst *rst, char **tab);
void				ft_checkdouble(t_pile *pile);
void				ft_printab(t_pile *pile);
void				ft_free_lst(t_lst **lst);
void				ft_add_last(t_lst **lst, t_lst *new);
void				ft_add(t_lst **lst, t_lst *new);
t_lst				*ft_new(int const content);
void				ft_check_error(char *str);
int					ft_reverota(char *str, t_pile *pile);
int					ft_rotate(char *str, t_pile *pile);
int					ft_push(char *str, t_pile *pile);
int					ft_swap(char *str, t_pile *pile);
void				ft_error(char *str);
void				ft_verifier(t_pile *pile);
void				operation(t_pile *pile, int i);
int					count_lst_len(t_lst *lst);
int					m_small(t_pile *pile, int m);
#endif

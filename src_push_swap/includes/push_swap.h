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
	int				content;
	struct s_lst	*next;
}					t_lst;

typedef struct		s_rst
{
	char			*op;
	struct s_rst	*next;
}					t_rst;

typedef struct		s_pile
{
	t_lst			*a;
	t_lst			*b;
	t_rst			*rst;
	t_rst			*tmp;
	int				n;
	int				deep_max;
}					t_pile;

void				ft_checkdouble(t_pile *pile);
void				ft_printab(t_pile *pile);
void				ft_add(t_lst **lst, t_lst *new);
t_lst				*ft_new(int const content);
void				ft_check_error(char *str);
void				ft_reverota(char *str, t_pile *pile);
void				ft_rotate(char *str, t_pile *pile);
void				ft_push(char *str, t_pile *pile);
void				ft_swap(char *str, t_pile *pile);
void				ft_error(char *str);
void				ft_verifier(t_pile *pile);
void				print_resultat(t_lst *lst);
#endif

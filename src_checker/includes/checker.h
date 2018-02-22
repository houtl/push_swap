/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 12:32:48 by thou              #+#    #+#             */
/*   Updated: 2018/02/22 12:51:53 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "libft.h"

# define ERROR	"Error"
# define OK		"OK"
# define KO		"KO"

typedef struct		s_pile
{
	t_list			*a;
	t_list			*b;
	int				n;
}					t_pile;

void				ft_reverota(char *str, t_pile *pile);
void				ft_rotate(char *str, t_pile *pile);
void				ft_push(char *str, t_pile *pile);
void				ft_swap(char *str, t_pile *pile);
void				ft_error(char *str);
void				ft_verifier(t_pile *pile);

#endif

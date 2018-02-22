/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <>                                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/04 15:34:17 by thou              #+#    #+#             */
/*   Updated: 2018/02/22 09:46:43 by thou             ###   ########.fr       */
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
	t_list			**a;
	t_list			**b;
	int				n;
}					t_pile;


void				ft_error(char *str);
void				ft_verifier(t_pile *pile);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <>                                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/04 15:34:17 by thou              #+#    #+#             */
/*   Updated: 2018/02/15 15:53:50 by thou             ###   ########.fr       */
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
	char			**a;
	char			**b;
	int				n;
}					t_pile;


void				ft_error(char *str);
void				ft_verifier(t_pile *pile);

#endif

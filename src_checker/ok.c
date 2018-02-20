/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ok.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <thou@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 01:54:07 by thou              #+#    #+#             */
/*   Updated: 2018/02/20 02:40:29 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_verifier(t_pile *pile)
{
	int		i;

	if (pile->b != NULL || pile->b[0] != NULL)
		ft_error(ERROR);
	i = 0;
	while (++i < pile->n)
		if (pile->a[i] < pile->a[i - 1])
			ft_error(KO);
	ft_error(OK);
}

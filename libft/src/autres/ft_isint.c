/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 14:32:58 by thou              #+#    #+#             */
/*   Updated: 2018/02/22 15:47:10 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isint(char *str)
{
	intmax_t	i;

	if (ft_strlen(str) > 11)
		return (0);
	i = ft_atointmax_base(str, 10);
	if (i > 2147483647 || i < -2147483648)
		return (0);
	return (1);
}

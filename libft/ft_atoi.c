/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmessin <frmessin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 10:56:36 by frmessin          #+#    #+#             */
/*   Updated: 2022/04/05 19:25:35 by frmessin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int	ft_isspace(const char p)
{
	if ((p >= '\t' && p <= '\r' ) || p == ' ')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	double	r;
	int		sign;
	int		n;

	sign = 1;
	while (ft_isspace(*str) != 0)
	{
		str++;
	}
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
			str++;
	while (ft_isdigit(*str))
	{
		n = *str - '0';
		r = (r * 10) + n;
		str++;
	}
	return (sign * r);
}

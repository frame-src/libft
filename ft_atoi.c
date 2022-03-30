/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmessin <frmessin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 10:56:36 by frmessin          #+#    #+#             */
/*   Updated: 2022/03/29 20:31:49 by frmessin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
int	ft_atoi(const char *str)
{
	int	r;
	int	n;

	r = 0;
	while (*str)
	{
		n = *str - '0';
		r = (r * 10) + n;
		str ++;
	}
	return (r);
}

int main (void)
{
	printf("%d",atoi("   -348923447934234fefqjgw"));
		return (0);
}
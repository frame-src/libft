/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmessin <frmessin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 17:03:38 by frmessin          #+#    #+#             */
/*   Updated: 2022/04/08 18:48:47 by frmessin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	long int	a;
	long int	m;
	int			count;
	int			sign;
	char		cr;
	
	a = n;
	sign = 1;
	m = 1;
	count = 0;
	if(n < 0)
		{
			a = n * (-1);
			sign = -1;
		}
	while (a != 0)
	{
		a = a / 10;
		m = m*10;
		count ++;
	}
	while(count >= 0)
	{
		cr = ((a - a*(m))/ m) + '0';
		a = a % m;
		m = m / 10;
		write(fd,&cr,1);
		count--;
	}
}

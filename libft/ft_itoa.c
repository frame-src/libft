/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmessin <frmessin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 22:33:07 by frmessin          #+#    #+#             */
/*   Updated: 2022/04/08 18:09:56 by frmessin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_size(long int n)
{
	int count;
	
	if( n == 0)
		return (1);
	count = 0;
	if(n < 0)
	{
		count++;
	}
	while(n != 0)
	{
		n = n/10;
		count++;
	}
	return (count);
}

char *ft_itoa(int n)
{
	char		*str;
	long int	ln;
	int			i;
	int			m;

	ln = n;
	i = ft_size(ln);
	str = (char *)malloc(i + 1);
	if(str == NULL)
		return (NULL);
	str[i] = '\0';
	if( n == 0)
	{
		str[0] = '0';
		return (str);
	}
	if(n < 0)
	{
		str[0] = '-';
		ln = -1 * ln;
	}

	while(ln != 0)
		{
			m = (ln % 10);
			ln = (ln - m)/10;
			str[i-1] = (char)(m + (int)'0');
			i--;
		}
	return (str);
}
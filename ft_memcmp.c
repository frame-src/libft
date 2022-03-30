/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmessin <frmessin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 22:17:21 by frmessin          #+#    #+#             */
/*   Updated: 2022/03/29 22:17:57 by frmessin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char *a;
	char *b;

	a = (const char *)s1;
	b = (const char *)s2;

	while(n > 0)
	{
		if( *a != *b)
			return(*a - *b);
		a++;
		b++;
		n--;
	}
	return (0);
}
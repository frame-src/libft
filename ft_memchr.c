/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmessin <frmessin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 22:21:05 by frmessin          #+#    #+#             */
/*   Updated: 2022/03/29 18:54:32 by frmessin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t i;

	i=0;
	while (*(const char*)s)
	{
		if(*(const char*)s == (char)c)
			return(s);
		else if(i == n)
			return(NULL);
	i++;
	s++;
	}
}

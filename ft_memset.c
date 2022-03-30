/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmessin <frmessin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 23:23:02 by frmessin          #+#    #+#             */
/*   Updated: 2022/03/30 17:27:59 by frmessin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	sub;
	size_t			i;

	sub = c;
	while (i < len)
	{
		*(unsigned char *)(b + i) = sub;
		i++;
	}
	return (b);
}

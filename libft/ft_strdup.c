/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmessin <frmessin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 16:04:32 by frmessin          #+#    #+#             */
/*   Updated: 2022/04/03 02:39:31 by frmessin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
ft_strdup:     [OK] [OK] [OK] [KO] [OK] [OK] [OK] 
[KO]: your strdup did not allocate the good size so the \0 test may be false

	Should i set ---> errno = ENOENT;
*/
char	*ft_strdup(const char *s1)
{
	int	i;
	char	*dup;
	
	i = ft_strlen((char *)s1);
	dup = malloc((i +1)* sizeof(char));
		if( dup == NULL)
			return (NULL);
	dup = ft_memcpy (dup, s1, i);
	dup[i] = '\0';
	return (dup);
}
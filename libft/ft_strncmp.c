/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmessin <frmessin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 17:37:58 by frmessin          #+#    #+#             */
/*   Updated: 2022/04/02 01:56:42 by frmessin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//		ft_strncmp:    [OK] [OK] [OK] [OK] [OK] [OK] [FAILED] [OK] [OK] [FAILED] [OK] [OK] [OK] [OK] 
//		[fail]: your strncmp does not cast in unsigned char the diff
//		[fail]: your strncmp does not work with non ascii chars
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	while(n > 0)
	{
		if((*a != *b) || ((*a == '\0') || (*b == '\0')))
			return((int)(*a - *b));
		n--;
		a++;
		b++;
	}
	return(0);
}
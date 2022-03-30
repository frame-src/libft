/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmessin <frmessin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 19:09:28 by frmessin          #+#    #+#             */
/*   Updated: 2022/03/29 18:13:29 by frmessin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char * dst, const char * src, size_t dstsize)
{
	size_t	srclen;
	
	srclen = ft_strlen(src);  // STRLEN will return the number of char in the string (- the '\0')
	if (srclen + 1 < dstsize) //i need to copy all, also the null '\0', so i need to know if i have enough space
	{
		ft_memcpy(dst, src, dstsize + 1);//once i'm sure that i can copy using memcpy till dstsize + 1 so i'm sure i'm copying also '\0'
	}
	else if (dstsize != 0) // in any other case i will copy till position i-1, and then i will add '\0'
	{
		ft_memcpy(dst, src, dstsize - 1);
		dst[dstsize-1] = '\0'; //The last char MUST BE '\0' [0][1][2][3][4][5]  len = 1+1+1+1+1+1 = 6 so the last space i have is dst[len -1]
	}
	return (srclen);
}

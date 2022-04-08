/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmessin <frmessin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 16:14:44 by frmessin          #+#    #+#             */
/*   Updated: 2022/04/02 00:54:10 by frmessin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//		ft_strrchr:    [FAILED] [FAILED] [FAILED] [OK] [FAILED] [OK] [OK] [OK] 
//		[fail]: your strrchr does not work with basic input
//		[fail]: your strrchr does not work with basic input
//		[fail]: your strrchr does not work with not found char
//		[fail]: your strrchr does not work with \0

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	*v;

	len = ft_strlen((char*)s) - 1;
	if(c == '\0')
		return(ft_strchr(s,'\0'));
	while (len >= 0)
	{
		if (s[len] == c)
		{
			v = (char *)s + (len);
			return (v);
		}
		len--;
	}
	return (NULL);
}

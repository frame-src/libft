/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmessin <frmessin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 17:26:43 by frmessin          #+#    #+#             */
/*   Updated: 2022/04/12 12:58:27 by frmessin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	a;
	size_t	stop;

	i = 0;
	stop = len;
	if ((ft_strlen(needle) || len) == 0)
		return ((char *)haystack);
	while (len > 0)
	{
		if (needle[0] == '\0')
			return ((char *)haystack);
		a = 0;
		while (needle[a] == haystack[i + a])
		{
			if (needle[a + 1] == '\0')
				return (&((char *)haystack)[i]);
			a++;
			if (a + i == stop)
				return (NULL);
		}
		i++;
		len--;
		if (haystack[i] == '\0')
			return (NULL);
	}
	return (NULL);
}
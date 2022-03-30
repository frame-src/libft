/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmessin <frmessin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 17:24:16 by frmessin          #+#    #+#             */
/*   Updated: 2022/03/30 17:50:27 by frmessin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlib.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t dstlen;
	size_t rtnvalue;
	size_t i;
	
	rtnvalue = (ft_strlen(dst) + ft_strlen(src));
	dstlen = ft_strlen(dst);
	i = 0;
	while(i < ft_strlen(src))
	{
		dst[dstlen + i] = src[i];
		if((dstlen + i ) == (dstsize))
			{
				dst[dstlen + i] = '\0';
				return (rtnvalue);
			}
		i++;
	}
	dst[dstlen + i] = '\0';
	return (rtnvalue);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmessin <frmessin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 17:57:30 by frmessin          #+#    #+#             */
/*   Updated: 2022/04/06 17:54:19 by frmessin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
/*llocates (with malloc(3)) and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string.*/

int	ft_itsin(char const a, char const *val)
{
	size_t i;
	
	i = 0;
	while (val[i])
	{
		if(a == val[i])
			return (1);
		i++;
	}
return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	end;
	char	*rtn; 
	
	i = 0;
	start = 0;
	end = 0;
	while(ft_itsin(s1[i],set) == 1)
	{	
		start = start + 1;
		i++;
	}
	i = 0;
	while((start < (ft_strlen(s1) - i)) && ft_itsin(s1[ft_strlen(s1) - 1 - i],set) == 1)
	{
		end = end + 1;
		i++;
	}
	rtn = malloc(sizeof(char) * (ft_strlen(s1) - start - end + 1));
		if(rtn == NULL)
			return NULL;
	rtn = ft_memcpy(rtn, s1 + start, ft_strlen(s1) - start - end);
	rtn[ft_strlen(s1) - start - end] = '\0';
	return (rtn);
}
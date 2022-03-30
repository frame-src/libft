/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmessin <frmessin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 17:26:43 by frmessin          #+#    #+#             */
/*   Updated: 2022/03/30 17:27:03 by frmessin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*  char *strnstr(const char *haystack, const char *needle, size_t len) 
**	The strstr() function locates the first occurrence of the null-terminated string needle in the null-terminated string haystack.
**	not more than len characters are searched.
**	If needle is an empty string, RETURN haystack; 
**	If needle occurs nowhere in haystack, RETURN NULL;
**	Else RETURN a pointer to the first character of the first occurrence of the needle.
*/

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t a;
	char* ptr;

	i = 0;
	ptr = (char *)haystack;
	while(len>0)
	{
		if(needle[0]=='\0')
			return (NULL);
		a=0;
		while(needle[a] == ptr[i+a])
		{
			if(needle[a+1] == '\0')
				return(&ptr[i]);
			a++;
		}
		i++;
		len--;
		if(haystack[i] == '\0')
			return(NULL);
	}
	return(NULL);
}
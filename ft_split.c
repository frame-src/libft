/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmessin <frmessin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 21:41:30 by frmessin          #+#    #+#             */
/*   Updated: 2022/04/11 07:14:19 by frmessin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static size_t ft_words(char const *s, char c)
{
	size_t	i;
	size_t	count;
	int		flag;
	
	count = 0;
	i = 0;
	while (s[i])
	{
		if(s[i] != c && flag == 0)
		{
			count++;
			i++;
			flag = 1;
		}
		else if (s[i] != c && flag == 1)
		{
			i++;
		}
		else
		{
			i++;
			flag = 0;
		}
	}
	return (count);
}
static size_t ft_letters(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while(s[i] != c)
	{
		count++;
		i++;
	}
	return count;
}
static char *ft_copy(char *p,char const *s,size_t size)
{
	size_t i;
	
	i = 0;
	while (i < size)
		{
			p[i] = s[i];
			i++;
		}
	p[i - 1]= '\0';
	return(p);
}
char **ft_split(char const *s, char c)
{
	char	**ptr;
	size_t	i;
	size_t	j;
	size_t	count;
	size_t	size;
	
	i = 0;
	j = 0;
	count = ft_words(s,c);
	ptr = malloc(count + 1);
		if(ptr == NULL)
			return (NULL);
	while(i < count)
	{
		while(s[j])
		{
			if(c != s[j])
			{	
				size = ft_letters(&s[j],c);
				ptr[i] = malloc(size);
				ptr[i] = ft_copy(ptr[i],&s[j],size);
				j = j + size -1;
			}	
			j++;
		}
		i++;
	}
	return (ptr);
}
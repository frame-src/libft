/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_split.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmessin <frmessin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 17:16:15 by frmessin          #+#    #+#             */
/*   Updated: 2022/04/07 21:40:58 by frmessin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

size_t ft_words (char const *s, char c)
{
	size_t	i;
	size_t	count;
	int		flag;
	
	while (s[i])   // [][][...][c][]
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
size_t ft_letter (char const *s, char c)
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
char *ft_copy (char *p,char const *s,size_t size)
{
	size_t i;
	while (i < size)
		{
			p[i] = s[i];
			i++;
		}
}
char **ft_split(char const *s, char c)
{
	char	**ptr;
	size_t	i;
	size_t	j;
	size_t	count;
	
	i = 0;
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
				size = ft_letters(s[j],c);
				ptr[i] = malloc(size);
				ptr[i] = ft_copy(ptr[i],&s[j],size);
			}	
			j++;
		}
		i++;
	}
}

// int main (void)
// {
// 	int	i;
// 	i = ft_words("hello world", ' ');
// 	printf("reeturn 2? : %d", i);

// 	return (0);
	
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmessin <frmessin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 21:41:30 by frmessin          #+#    #+#             */
/*   Updated: 2022/04/13 00:05:39 by frmessin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_words(const char *str, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) != c && *(str + i) != '\0')
		{
			count++;
			while (*(str + i) != c && *(str + i) != '\0')
				i++;
		}
		if (*(str + i) != '\0')
			i++;
	}
	return (count);
}
static	size_t ft_wordlen(char const *s, char c)
{
	size_t count;

	count = 0;
	while(*s && *s != c)
	{
		count++;
		s++;
	}
	return (count);
}
static	void	*ft_free(char **ptr)
{
	size_t i;
	
	i = 0;
	while (ptr[i] != NULL)
	{
		free(ptr[i]);
		i++;
	}
	free(ptr);
	return (NULL);
}

char **ft_split(char const *s, char c)
{
	char	**ptp;
	size_t	words;
	size_t	wordlen;
	int		i;
	size_t	j;
	
	i = 0;
	j = 0;
	words = 0;
	wordlen = 0;
	if (!s)
		return (NULL);
	words = ft_words(s, c);
	ptp = (char **)ft_calloc(words + 1, sizeof (char*));
	if (!ptp)
		return (NULL);
	ptp[words] = NULL;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			wordlen = ft_wordlen(&s[i], c);
			ptp[j] = ft_substr(&s[i], 0, wordlen);
			if (!ptp[j])
			{
				ft_free(ptp);
			}
			i += wordlen;
			j++;
		}
		if (s[i] != '\0')
			i++;
	}
	return (ptp);
}
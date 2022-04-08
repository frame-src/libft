/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_strjoin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmessin <frmessin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 22:25:54 by frmessin          #+#    #+#             */
/*   Updated: 2022/04/04 17:55:08 by frmessin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <strings.h>
#include <stdlib.h>
#include <stdio.h>


size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (*s)
	{
		s++;
		i++;
	}
	return (i);
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*d;
	const char	*s;

	s = (const char *) src;
	d = (char *) dst;
	if(src == NULL && dst == NULL)
		return (NULL);
	while (n)
	{
		*d = *s;
		n--;
		d++;
		s++;
	}
	return (dst);
}
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if(!src && !dst)
		return (NULL);
	if(dst < src)
		{
			ft_memcpy(dst,src,len);
		}
	else if( dst > src)
		{
			while(len > 0)
				{
					((char *)dst)[len - 1] = ((char *)src)[len - 1];
					len--;
				}
		}
	return(dst);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t spaceleft;
	size_t lendst;
	size_t lensrc;
	
	lendst = ft_strlen(dst);
	lensrc = ft_strlen((char *)src);
	spaceleft = dstsize - lendst - 1;
	if( lendst >= dstsize)
		return (dstsize + lensrc);
	if(lensrc <= spaceleft)
		{
		ft_memcpy((dst +lendst), src, lensrc + 1);
		}
	else
		{
		ft_memcpy((dst +lendst), src, spaceleft);
		dst[dstsize -1] = '\0';
		}
	return (lendst + lensrc);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	newstr = malloc(((ft_strlen(s1) + ft_strlen(s2))+1));
	if (newstr == NULL)
		return (NULL);
	ft_strlcat(ft_memmove(newstr, s1, ft_strlen(s1)), s2,(ft_strlen(s1) + ft_strlen(s2))+1);
	return (newstr);

}

int main (void)
{
	char *s1 = "my favorite animal is";
	char *s2 = " ";
	char *s3 = "the nyancat";
	
	
	char *res = ft_strjoin(ft_strjoin(s1, s2), s3);
	printf("la tua stringa:%s~\n\t",res);
	return 0;
	
}
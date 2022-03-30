/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmessin <frmessin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 15:47:25 by frmessin          #+#    #+#             */
/*   Updated: 2022/03/30 17:27:55 by frmessin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)  /*DA FINIRE*/
{
	size_t	i;
	char *d;
	const char *s;
	unsigned long int add_dst;
	unsigned long int add_src;

	add_dst = (long int) dst;
	add_src = (long int) src;

	if ((a_dst - a_src) >= n)
		return (ft_memcpy(dst,src,n))
	
	else
		{
			d = src + n;
			s = dst + n;
			
			while(n >= 0)
			{
				*(char *)(d) = *(char *)(s);
				n--;
				
			}
		}
	
	d = dst;
	s = src;
	i = 0;
	while (i <= n)
	{
		*(char *)(d + i) = *(char *)(s + i);
		i++;
	}
	return (dst);
}

// lets try it again

void	*ft_memmove(void *dst, const void *src, size_t n)  /*DA FINIRE*/
{
	char *d;
	const char *s;
	char *lastd;
	char *lasts;

	d = dst;
	s = src;
	if ((d - s) >= n)
		ft_memcpy(dst,src,n);
	else
	{
		lastd = d + (n - 1);
		lasts = s + (n - 1);
		while(n)
		{
			*lastd = *lasts;
			lastd--;
			lasts--;
		}
	}
	return (dst);
}

// penso di aver capito: Praticamente memcpy copia e tira dritto, mem move vede se &dst e &src coincidono
//se succede sto andando in overlapping e comincia a copiare a ritroso partendo dall src[n]
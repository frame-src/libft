/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmessin <frmessin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 16:14:44 by frmessin          #+#    #+#             */
/*   Updated: 2022/03/30 17:28:31 by frmessin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	*v;

	len = strlen(s);
	while (len >= 0)
	{
		if (s[len] == c)
		{
			v = s + (len +1);
			return (v);
		}
		len = len - 1;
	}
	return (NULL);
}

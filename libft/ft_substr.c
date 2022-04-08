/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmessin <frmessin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 22:21:37 by frmessin          #+#    #+#             */
/*   Updated: 2022/04/05 21:21:07 by frmessin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)

{
	char *ptr;

	ptr = (char *)malloc((len +1) * sizeof(char));
		if( ptr == NULL)
			return (NULL);
	if(start >= ft_strlen(s))
		return ptr;
	ft_strlcpy(ptr, s + start, len +1);
		return ptr;
}
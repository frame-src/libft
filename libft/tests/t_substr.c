/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_substr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmessin <frmessin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 18:23:14 by frmessin          #+#    #+#             */
/*   Updated: 2022/04/03 18:47:24 by frmessin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_substr(char const *s, unsigned int start, size_t len)

{
	void ptr*;

	ptr = malloc( len * sizeof(char))
		if( ptr == NULL)
			return (NULL);
	memcpy(ptr, s + start, len);
	return ptr;   
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmessin <frmessin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 13:52:34 by frmessin          #+#    #+#             */
/*   Updated: 2022/03/27 14:13:31 by frmessin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *a)
{
	int	i;

	i = 0;
	while (*a)
	{
		a++;
		i++;
	}
	return (i);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;
	int c;

	c = 0;
	i = 0;
	
	if (ft_strlen(s1) < ft_strlen(s2))
		return (-1);
	else if (ft_strlen(s1) > ft_strlen(s2))
		return (1);
	else
	{
		while(i <= n)
		{
			if(*s1 > *s2)
				return (1);
			else if(*s1 < *s2)
				return (-1);
			else if(*s1 == '\0')
				return (0);
			s1++;
			s2++;
			i++;
		}
	}
}


int main (void)

    {
        char c[] = "OP4F";
        char x[] = "OP4werF";
        int i = 3;
        int a;

        a = ft_strncmp(c,x,i);
        printf("\t %d \n",a);
        return 0;
    }

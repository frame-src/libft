/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_atoi.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmessin <frmessin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 10:56:36 by frmessin          #+#    #+#             */
/*   Updated: 2022/04/05 16:37:34 by frmessin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// int	ft_atoi(const char *str)
// {
// 	double r;
// 	int	n;
// 	int sign;

// 	r = 0;
// 	sign = 1;
// 	while (*str)
// 	{
// 		if(*str == '-')
// 			sign = -1;
// 		if(isdigit(*str))
// 		{
// 			while(isdigit(*str))
// 			{
// 				n = *str - '0';    // ASCII i have '7' = 67 - 60 = 7; (int) -2147483648  and  +2147483647
// 						r = (r * 10) + n; // 789    7*100 + 8*10 + 9*1
// 				str ++;
// 			}
// 			if( (-2147483648) >= (sign * r) && (sign * r) <= (2147483647))
// 				return((int)(sign * r));
// 			else 
// 				return ('\0');
// 		}
	
// 	}
// 	return ((int)(sign * r));
// }

// int main (void)
// {
// 	printf("%d",ft_atoi("p443499999klk"));
// 		return (0);
// }

// char *ptr = "hello world"

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	r;
	int	n;
	int sign;

	r = 0;
	sign = 1;
	if((*str == '-' || *str == '+') || (ft_isdigit(*str) > 0))
	{
		if(*str == '-')
			sign = -1;
		while (ft_isdigit(*str) > 0)
		{
			n = *str - '0';    // ASCII i have '7' = 67 - 60 = 7; (int) -2147483648  and  +2147483647
			r = (r * 10) + n; // 789    7*100 + 8*10 + 9*1
			str ++;
		}
		return (r * sign);
	}
	return (r * sign);
}

int main (void)
{
	char *r = "porcacciala9820";
	printf("atoi: \t %d \n",atoi(r));
	printf("ft_atoi: \t %d \n",ft_atoi(r));
	
}





#include <stdlib.h>
#include <stdio.h>

int    ft_atoi(const char *str)
{
    int    r;
    int    n;
    int sign;

    r = 0;
    sign = 1;
    if((*str == '-' || *str == '+') || (isdigit(*str) > 0))
    {
        if(*str == '-')
            sign = -1;
            str++;
        while (isdigit(*str) > 0)
        {
            n = *str - '0';    // ASCII i have '7' = 67 - 60 = 7; (int) -2147483648  and  +2147483647
            r = (r * 10) + n; // 789    7*100 + 8*10 + 9*1
            str ++;
        }
        return (r * sign);
    }
    return (r * sign);
}
int main (void)
{
    char *r = "945";
    printf("atoi: \t %d \n",atoi(r));
    printf("ft_atoi: \t %d \n",ft_atoi(r));
    
}
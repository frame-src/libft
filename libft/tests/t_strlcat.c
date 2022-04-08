/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_strlcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmessin <frmessin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 12:24:49 by frmessin          #+#    #+#             */
/*   Updated: 2022/04/03 01:33:02 by frmessin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t dstlen;
	size_t rtnvalue;
	size_t i;
	
	rtnvalue = (strlen(dst) + strlen(src));
	dstlen = strlen(dst);
	i = 0;
	while(i < strlen(src))
	{
		dst[dstlen + i] = src[i];
		if((dstlen + i ) == (dstsize))  //...[dstlen]..[][dstlen + i]== ...[][dstsize-1][/0]
			{
				dst[dstlen + i] = '\0'; //dst[dstlen + i] = ..[dstlen]...[i-1][i][dstlen + srclen];
				return (rtnvalue);
			}
		i++;
		
	}
	dst[dstlen + i] = '\0';
	return (rtnvalue);
}

int main(void)
{
	size_t max = strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4;
	char *src = "the cake is a lie !\0I'm hidden lol\r\n";
	char dst1[0xF00] = "there is no stars in the sky";
	int i = strlcat(dst1,src,max);
	printf("\tstringa copiata:\t%d\t%s\n\n",i,dst1);
	char *src1 = "marla";
	char dst2[0xF00] = "there is no stars in the sky";
	int j = ft_strlcat(dst2,src,max);
	printf("\tstringa copiata:\t%d\t%s\n\n",j,dst2);
	
	return (0);
}
 //dstsize - strlen(dst) - 1 characters

// 	__builtin___strlcat_chk (buff1, str, max, __builtin_object_size (buff1, 2 > 1 ? 1 : 0));
// 	ft_strlcat(buff2, str, max);
// 	if (!strcmp(buff1, buff2))
// 		exit(TEST_SUCCESS);
// 	exit(TEST_FAILED);

// Diffs:
//      strlcat: |there is no stars in the sky|
//   ft_strlcat: |there is no stars in the skythe cake is a lie !|
#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		*(char*)dst = *(const char*)src;
		i++;
		dst++;
		src++;
	}
	return (dst);
}

size_t	ft_strlcpy(char * dst, const char * src, size_t dstsize)
{
	size_t	srclen;
	
	srclen = strlen(src);  // STRLEN will return the number of char in the string (- the '\0')
	if (srclen + 1 < dstsize) //i need to copy all, also the null '\0', so i need to know if i have enough space
	{
		ft_memcpy(dst, src, dstsize + 1);//once i'm sure of that i can copy using memcpy till dstsize + 1 so i'm sure i' copying also '\0'
	}
	else if (dstsize != 0) // in any other case i will copy till position i-1, and then i will add '\0'
	{
		ft_memcpy(dst, src, dstsize - 1);
		dst[dstsize-1] = '\0'; //The last char MUST BE '\0' [0][1][2][3][4][5]  len = 1+1+1+1+1+1 = 6 so the last space i have is dst[len -1]
	}
	return (srclen);
}


int main (void)
{
	char src[100]= "Hello World";
	char dst[100]= "blablablabla";
	char dst1[100]= "blablablabla";
	int i;

	i = strlen(dst);
	printf("\nlengt dst: \t\t %d\n",i);
	printf("string in dst: \t\t %s\n\n",dst);
	printf("ft_strlcpy src: \t %zu \n",ft_strlcpy(dst,src,strlen(dst)));
	i = strlen(dst);
	printf("lengt strlcp dst: \t %d\n",i);
	printf("dst after copy:  \t %s\n",dst);
	printf("\nstrlcp src: \t \t %zu \n",strlcpy(dst1,src,strlen(dst1)));
	i = strlen(dst1);
	printf("lengt strlcp dst: \t %d\n",i);
	printf("Puntatore dst:\t \t %s\n",dst1);
}

#include <string.h>
#include <stdio.h>
#include <stddef.h>


/* AROUf
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;

	if(!dst)
		return NULL;
	while (i < n)
	{
		*(char *)(dst + i) = *(char *)(src + i);
		i++;
	}
	((char *)dst)[i] = '\0';
	return (dst);
}*/


void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*d;
	const char	*s;

	s = (const char *) src;
	d = (char *) dst;
	if(!dst)
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

// void	*ft_memcpy(void *dest,const void *src, size_t n)

// {
//     char    *cdest;
//     char    *csrc;
//     size_t  i;
//     cdest = (char *)dest;
//     csrc = (char *)src;
//     i = 0;
//     while (i < n)
//     {
//         cdest[i] = csrc[i];
//         i++;
//     }
// 	return (dest);
// }

int main( void )
{

char const * source = "Hello World\n";
char *target = malloc(1020);


printf( "Esempio: %s\n", target);
printf( "Esempio: %s\n", ft_memcpy(((void *)0), ((void *)0), 3));
 
return 0; 
}


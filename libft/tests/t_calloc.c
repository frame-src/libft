#include <stdlib.h>
#include <stdio.h>
#include <strings.h>
void	*ft_calloc(size_t count, size_t size)
{
	void *ptr;
	ptr = malloc(count * size);
		if( ptr == NULL)
			return (ptr);
	ft_bzero(ptr, size);
	return(ptr);
}

int main (void)
{
	char *ptr = ft_calloc(3,sizeof(1));
	char *mall = malloc ( 3 * sizeof(1));
	if(sizeof (mall) == sizeof (ptr))

		printf("vediamo %s",ptr);
		
	return(0); 
}
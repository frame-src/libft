#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
		{
			return ((char*)s);
		}
		else
			s++;
	}
	if(c == '\0')
		return ((char*) s);
	return (NULL);
}

#include "libft.h"

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


/*char *ft_strchr(const char *s, int c)
{
	char	*p;
	int		i;
	int		a;

	i = ft_strlen((char*)s);
	a = 0;
	while (a <= (ft_strlen((char*)s)+ 1))
	{
		if (*s == c || (*s == '\0' && c == '\0'))
			printf("found something");
			return ( p = (char*)s);
		s++;
		a++;
	}
	return (NULL);
}*/

int main (void) 
{	
	char *r;
	char *m;
	char *p="hello w0rld'\0"; //it should contain \0 nulll caracter eol
	r = strchr(p,'P');
	m = ft_strchr(p,'P');

	printf("\n \t r is:\t %s and the pointer: point to: \t %d\n ",r,&r);
	printf("\t m is:\t %s and the pointer: point to: \t %d\n ",m,&m);

	return (0);
}
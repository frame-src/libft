#include <string.h>
#include <stdio.h>


void *ft_memchr(const void *s, int c, size_t n);

int main (void)
{
	char *s = "blabla";
	int i = 94;
	size_t n = 3;

	printf("print ascii =\t %s\n",memchr(s,i,n));
	printf("print ft_ascii =\t %s\n",ft_memchr(s,i,n));
	return (0);
}

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t i;

	i=0;
	while (*(const char*)s)
	{
		if(*(const char*)s == (char)c)
			return(s);
		else if(i == n)
			return(NULL);
	i++;
	s++;
	}
}

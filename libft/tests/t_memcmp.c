#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 
** ft_memcmp() function returns zero if the two strings are identical;
** if they are identicall it return 0;
** otherwise returns the difference between the first two differing bytes;
*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *a;
	unsigned char *b;

	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	size_t i;

	i = 0;
	while(i <= n)
	{
		if( a[i] != b[i])
			return(a[i] - b[i]);
		i++;
	}
	return (0);

}


int main (void) 
{
	char *s = "\xff\xaa\xde\xffMACOSX\xff";
	char *s1 = "\xff\xaa\xde\x02";
	printf("the string cmp result \t%d\t\t cause o - e is: %d \n",ft_memcmp(s,s1,8), ('o'-'e'));
	printf("the string cmp result \t%d\t\t cause o - e is: %d \n",memcmp(s,s1,8), ('o'-'e'));
	return (0);
}
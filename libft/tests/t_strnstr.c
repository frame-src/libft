#include <string.h>
#include <stdio.h>

//char *ft_strnstr(const char *haystack, const char *needle, size_t len);

/*  char *strnstr(const char *haystack, const char *needle, size_t len) 
**	The strstr() function locates the first occurrence of the null-terminated string needle in the null-terminated string haystack.
**	not more than len characters are searched.
**	If needle is an empty string, RETURN haystack; 
**	If needle occurs nowhere in haystack, RETURN NULL;
**	Else RETURN a pointer to the first character of the first occurrence of the needle.
*/

// char *ft_strnstr(const char *haystack, const char *needle, size_t len)
// {
// 	size_t i;
// 	size_t a;
// 	//char	*ptr;

// 	i = 0;
// 	//ptr = (char *)haystack;
// 	while(len>0)
// 	{
// 		if(needle[0]=='\0')  
// 			return (NULL);
// 		a=0;
// 		while(needle[a] == haystack[i+a])
// 		{
// 			if(needle[a+1] == '\0')
// 				return(&((char *)haystack)[i]); //(&ptr + i)
// 			a++;
// 		}
// 		i++;
// 		len--;
// 		if(haystack[i] == '\0')
// 			return(NULL);
// 	}
// 	return(NULL);
// }
/*int main (void)
{
	printf("stai cercando:\t %20s \t",ft_strnstr("seni seviyorum ezgi", "ezgi",25));
	return (0);
}*/

/* HO USATO MEMCMP cosi posso controllare a pezzi di 
char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t len_needle;
	size_t a;
	int i;
	char *arr = haystack;

	if(needle[0]=='\0')
		return (NULL);
	len_needle = strlen(needle);
	a=0;
	while(a <= len)
	{
		i = memcmp(needle, arr[a],len_needle);
		if(i == 0)
			return(arr[a]);
		a = a + len_needle;
	}
}	*/


char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	a;
	size_t	stop;

	i = 0;
	stop = len;
	if((strlen(needle) || len) == 0)
		return ((char *)haystack);
	while(len>0)
	{
		a=0;
		while(needle[a] == haystack[i+a])
		{
			if(needle[a+1] == '\0')
				return(&((char *)haystack)[i]);
			a++;
			if(a+i == stop)
				return(NULL);
		}
		i++;
		len--;
		if(haystack[i] == '\0')
			return(NULL);
		qif(needle[0]=='\0')  
			return (NULL);
	}
	return(NULL);
}
int main (void)
{
	char *s1 = "oh no not the empty string !";
	char *s2 = "";
	size_t max = strlen(s1;
	char *i1 = strnstr(s1, s2, max);
	char *i2 = ft_strnstr(s1, s2, max);
	printf ("your: \t %s \n",i2);
	printf ("orig: \t %s \n",i1);
	if (i1 == i2)
		{
			printf("it should be right");
		}
}
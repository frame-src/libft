#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*dup;
	
	i = strlen(s1);
	dup = malloc(i * sizeof(char));
		if( dup == NULL)
			return (NULL);
	dup = memcpy (dup, s1, i);
	return (dup);
}

int main (void)
{
	char *str = "ciao ciaociao";
	char *dup;
	dup = ft_strdup(str);
	printf("%s",dup);
	return 0;
}

#include "libft.h"
#include <stdlib.h>
/*llocates (with malloc(3)) and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string.*/

char *ft_strtrim (char const *s1, char const *set)
{
	char	*rtn;
	int		a[2];
	size_t		i;
	int		c;
	
	c = 0;
	while (c < 2)
	{
		i = 0;
		while (i < ft_strlen(set))
		{
			if(s1[c * ((ft_strlen(s1)) - 1)] == set[i])
			{
				a[c] = 1;
				break;
			}
			else 
				a[c] = 0;
			i++;
		}
		c++;
	}
	
if( a[0] == 0 && a[1] == 0)
	{
		rtn = (char *)malloc((1 + ft_strlen(s1)));
		if ( rtn == NULL)
		return (NULL);
		rtn = ft_memcpy(rtn, s1,ft_strlen(s1));
	}
if( a[0] == 1 && a[1] == 1)
	{
		rtn = (char *)malloc((ft_strlen(s1) - 1));
		if ( rtn == NULL)
		return (NULL);
		rtn = ft_memcpy(rtn, &s1[1] ,ft_strlen(s1) -2);
	}
if( a[0] == 0 && a[1] == 1)
	{
		rtn = (char *)malloc((ft_strlen(s1)));
		if ( rtn == NULL)
		return (NULL);
		rtn = ft_memcpy(rtn, s1,ft_strlen(s1) -1);
	}
if( a[0] == 1 && a[1] == 0)
	{
		rtn = (char *)malloc((ft_strlen(s1)));
		if ( rtn == NULL)
		return (NULL);
		rtn = ft_memcpy(rtn, &s1[1],ft_strlen(s1) -1);
	}
	return(rtn);
}


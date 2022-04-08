#include <stdio.h>   //controllare
#include <string.h>



int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while(n > 0)
	{
		if((*s1 != *s2) || ((*s1 == '\0') || (*s1 == '\0')))
			return((int)(*s1 - *s2));
		n--;
		s1++;
		s2++;
	}
	return(0);
}

int main (void)
{
	printf("%d",ft_strncmp("hello HD","hello HDD",30));  // '\0' - 'D' = (<0)

	return 0;
}


/*
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


int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;
	int c;

	c = 0;
	i = 0;
	
	if (strlen(s1) < strlen(s2))
		return (-1);
	else if (ft_strlen(s1) > ft_strlen(s2))
		return (1);
	else
	{
		while(i <= n)
		{
			if(*s1 > *s2)
				return (1);
			else if(*s1 < *s2)
				return (-1);
			else if(*s1 == '\0')
				return (0);
			s1++;
			s2++;
			i++;
		}
	}
}


int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while(n > 0)
	{
		if((*s1 != *s2) || ((*s1 == '\0') || (*s1 == '\0')))
			return((int)(*s1 - *s2));
		n--;
		s1++;
		s2++;
	}
	return(0);
}
*/

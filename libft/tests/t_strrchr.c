
#include <stdio.h>
#include <strings.h>
//		ft_strrchr:    [FAILED] [FAILED] [FAILED] [OK] [FAILED] [OK] [OK] [OK] 
//		[fail]: your strrchr does not work with basic input
//		[fail]: your strrchr does not work with basic input
//		[fail]: your strrchr does not work with not found char
//		[fail]: your strrchr does not work with \0

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	*v;

	len = strlen((char*)s) - 1;
	while (len >= 0)
	{
		if (s[len] == c)
		{
			v = (char *)s + (len +1);
			return (v);
		}
		len--;
	}
	return (NULL);
}

int main()
{
	char *src = "the cake is a lie !\0I'm hidden lol\r\n";
	char *d1 = strrchr(src, ' ');
	char *d2 = ft_strrchr(src, ' ');

	if (d1 == d2)
		printf("\t %c\t \n", *d2);

}
#include <stdio.h>
#include <string.h>

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

int main (void)
{
	char a[5]="ocan";
	char b[5]="di";
	printf("\t %s \t original strlen:\t %lu \n \t %s \t mine ft_strlen:\t %lu \n",a, strlen(a),b ,ft_strlen(b));
}


// "     \t    -42\0"
//  1111111112334
//           ^
{
	// 1) Skip whitespace
	while (ft_isspace(*s))
	{
		s++;
	}
	// "-?????"
	
	// 2) Process + or -
	if (*s == '-')
		...;
	else if (*s == '+')
		...;
	
	// "41086"
	// 3) Main Loop
	while (ft_isdigit(*s))
	{
		// Space for more patterns/ideas
		s++;
	}

	// 4)
	return (r * sign);
}






void	f(char *p)
{
	int	x;
	
	if (p == NULL)	// Guard pattern
		return ;
	

	// String iteration
	x = 0;
	while (p[x] != '\0')
	{
		// Here there's some other pattern inside
		x++;
	}

	while (*p != '\0')
	{
		// Here there's some other pattern inside
		p++;
	}
}

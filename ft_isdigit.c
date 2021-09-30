#include <stdio.h>

int ft_isdigit (int n)
{
	if (n >= 48 && n <= 57)
		return(1);
	return(0);
}

int main()
{
	printf("%d", ft_isdigit(48));
}
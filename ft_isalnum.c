#include <stdio.h>

int	ft_isalnum(int a)
{
	if	((a >= 48 && a <= 57)
		||(a >= 65 && a <= 90)
		||(a >= 97 && a <= 122))
		return(1);
	return(0);
}

int main ()
{
	printf("%d", ft_isalnum('/'));
}
#include "ft_strlcat.c"
#include <stdio.h>

int main()
{
	char a[100] = "mets le ", b[] = "dans aaskjfhjashbdjhafbgjahfgjahfgkjhadfgkjadhfgkjdafhgjkadhfgjkadfhgjkdafhgjkdafhgkjadfhgjkdafhgdjkfghdfjkaghajkdfhgdfkjhajkdfghafjhg";
	printf("%i\n", ft_strlcat(a, b, 100));
	printf("%s",  a);
}

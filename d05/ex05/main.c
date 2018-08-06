#include "ft_strstr.c"
#include <stdio.h>
#include <string.h>

int main()
{
	printf("result : '%s', expected : '%s'", ft_strstr("Bonjour toi !", "u"), strstr("Bonjour toi !", "u"));
}

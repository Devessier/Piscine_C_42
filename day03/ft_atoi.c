#include <stdio.h>
#include <stdlib.h>

void	ft_putchar(char a);

int	is_equal_minus_or_more(char c)
{
	return (c == '+' || c == '-');
}

int	is_int_signed(char *str, int i)
{
	if (!i)
		return (0);
	if (!is_equal_minus_or_more(str[i - 1]) && is_equal_minus_or_more(str[i]))
	{
		return (str[i] == '-' ? -1 : 1);
	}
	return (0);
}

void	ft_atoi(char *str)
{
	int i;
	int total;
	int is_signed;
	int mod;

	i = -1;
	total = 0;
	is_signed = 0;
	mod = 1;
	while (*(str + ++i) != '\0')
	{
		if (str[i] < '!')
			continue;
		else if (str[i] >= '0' && str[i] <= '9')
		{
			total = total * 10 + (str[i] - '0');
		}
		else
		{
			is_signed = is_int_signed(str, i);
			if (!is_signed)
				break ;
			else
				mod = is_signed == 1 ? 1 : -1;
		}
	}
	printf("ft : %i\n", total * mod);
}

int main()
{
	ft_atoi("1    2     3");
	printf("atoi : %i", atoi("--1    2     3"));
}

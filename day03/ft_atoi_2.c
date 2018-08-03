int	ft_atoi(char *str)
{
	int i;
	int total;
	int mod;

	i = 0;
	total = 0;
	mod = 1;
	while (i[str] >= '\t' || i[str] <= '\r' || i[str] == ' ')
		i++;
	if (i[str] == '+' || i[str] == '-')
		mod = i++[str] == '+' ? 1 : -1;
	while (i[str] != '\0' && i[str] >= '0' && i[str] <= '9')
		total = total * 10 + (i++[str] - '0');
	return (total * mod);
}

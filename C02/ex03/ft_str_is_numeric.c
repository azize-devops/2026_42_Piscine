int ft_str_is_numeric(char* str)
{
	int counter;
	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] < '0' || str[counter] > '9')
			return (0);
		counter++;
	}
	return (1);
}
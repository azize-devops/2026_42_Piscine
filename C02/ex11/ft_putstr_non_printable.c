void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr_non_printable(char *str)
{
	int i;
	unsigned char c;
	char *hex;

	hex = "0123456789abcdef";
	i = 0;
	while (str[i] != '\0')
	{
		c = (unsigned char)str[i];
		if (c < 32 || c > 126)
		{
			ft_putchar('\\');
			ft_putchar(hex[c / 16]);
			ft_putchar(hex[c % 16]);
		}
		else
		{
			ft_putchar(c);
		}
		i++;
	}
}

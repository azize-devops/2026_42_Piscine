void ft_putstr_non_printable(char *str)
{
    int counter;

    counter = 0;
    while (str[counter] != '\0')
    {
        if (str[counter] < 32 || str[counter] > 126)
        {
            write(1, "\\", 1);
            if (str[counter] < 16)
                write(1, "0", 1);
            ft_putnbr_base(str[counter], "0123456789abcdef");
        }
        else
            write(1, &str[counter], 1);
        counter++;
    }
}

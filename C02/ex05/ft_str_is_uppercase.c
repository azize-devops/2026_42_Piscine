int ft_str_is_uppercase(char *str)
{
    int counter;
    counter = 0;
    while (str[counter] != '\0')
    {
        if (str[counter] < 'A' || str[counter] > 'Z')
            return (0);
        counter++;
    }
    return (1);
}

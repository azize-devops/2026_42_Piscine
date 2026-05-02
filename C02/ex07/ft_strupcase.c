char *ft_strupcase(char *str)
{
    int counter;

    counter = 0;
    while (str[counter] != '\0')
    {
        if (str[counter] >= 'a' && str[counter] <= 'z')
            str[counter] = str[counter] - 32;
        counter++;
    }
    return (str);

}

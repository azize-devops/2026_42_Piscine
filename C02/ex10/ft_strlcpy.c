unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int counter;

    counter = 0;
    if (size == 0)
        return (ft_strlen(src));
    while (src[counter] != '\0' && counter < size - 1)
    {
        dest[counter] = src[counter];
        counter++;
    }
    dest[counter] = '\0';
    while (src[counter] != '\0')
        counter++;
    return (counter);
}

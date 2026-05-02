void *ft_print_memory(void *addr, unsigned int size)
{
    unsigned int counter;
    unsigned int j;
    unsigned char *ptr;

    ptr = (unsigned char *)addr;
    counter = 0;
    while (counter < size)
    {
        j = 0;
        while (j < 16 && counter + j < size)
        {
            if (ptr[counter + j] < 16)
                write(1, "0", 1);
            ft_putchar(ptr[counter + j]);
            if (j % 2 == 1)
                write(1, " ", 1);
            j++;
        }
        while (j < 16)
        {
            write(1, " ", 1);
            if (j % 2 == 1)
                write(1, " ", 1);
            j++;
        }
        j = 0;
        while (j < 16 && counter + j < size)
        {
            if (ptr[counter + j] >= 32 && ptr[counter + j] <= 126)
                ft_putchar(ptr[counter + j]);
            else
                write(1, ".", 1);
            j++;
        }
        write(1, "\n", 1);
        counter += 16;
    }
    return addr;
}

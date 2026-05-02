char* ft_strcpy(char* dest, char* src)
{
	int counter = 0;
	while (src[counter] != '\0')
	{
		dest[counter] = src[counter];
		counter++;
	}
	dest[counter] = '\0';
	return dest;
}

/* Test kodu 
#include <stdio.h>
#include <string.h>

int main(void)
{
    char src[] = "Merhaba, 42!";
    char dest1[50];
    char dest2[50];

    ft_strcpy(dest1, src);
    printf("ft_strcpy: %s\n", dest1);

    strcpy(dest2, src);
    printf("strcpy:    %s\n", dest2);

    return (0);
}*/
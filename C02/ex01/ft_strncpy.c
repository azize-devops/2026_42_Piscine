char* ft_strncpy(char* dest, char* src, unsigned int n)
{
	unsigned int counter;
	counter = 0;
	while (counter < n && src[counter] != '\0')
	{
		dest[counter] = src[counter];
		counter++;
	}
	while (counter < n)
	{
		dest[counter] = '\0';
		counter++;
	}
	return dest;
}
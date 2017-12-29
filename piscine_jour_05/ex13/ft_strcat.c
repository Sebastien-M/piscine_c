char *ft_strcat(char *dest, char *src)
{
    int counter;
    int counter2;

    counter = 0;
    counter2 = 0;
    while (dest[counter] != '\0')
    {
        counter++;
    }
    while (src[counter2] != '\0')
    {
        dest[counter] = src[counter2];
        counter++;
        counter2++;
    }
    dest[counter] = '\0';
    return (dest);
}

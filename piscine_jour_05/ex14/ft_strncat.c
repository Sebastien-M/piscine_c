char *ft_strncat(char *dest, char *src, int nb)
{
    int counter;
    int counter2;

    counter = 0;
    counter2 = 0;
    while (dest[counter] != '\0')
    {
        counter++;
    }
    while (src[counter2] != '\0' && counter2 < nb)
    {
        dest[counter] = src[counter2];
        counter2++;
        counter++;
    }
    dest[counter] = '\0';
    return (dest);
}

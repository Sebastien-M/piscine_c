char *ft_strlowcase(char *str)
{
    int counter;

    counter = 0;
    while (str[counter] != '\0')
    {
        if (str[counter] > 64 && str[counter] < 91)
        {
            str[counter] = str[counter] + 32;
        }
        counter++;
    }
    return (str);
}

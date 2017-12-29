int ft_str_is_printable(char *str)
{
    int counter;

    counter = 0;
    while (str[counter] != '\0')
    {
        if (str[counter] <= 31)
        {
            return (0);
        }
        counter++;
    }
    return (1);
}

int ft_str_is_uppercase(char *str)
{
    int counter;

    counter = 0;
    while (str[counter] != '\0')
    {
        if (str[counter] < 65 || str[counter] > 90)
        {
            return (0);
        }
        counter++;
    }
    return (1);
}

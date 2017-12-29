int ft_str_is_numeric(char *str)
{
    int counter;

    counter = 0;
    while (str[counter] != '\0')
    {
        if(str[counter] < 48 || str[counter] > 57)
        {
            return (0);
        }
        counter++;
    }
    return (1);
}

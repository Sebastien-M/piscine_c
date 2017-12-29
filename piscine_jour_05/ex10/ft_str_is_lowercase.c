int ft_str_is_lowercase(char *str)
{
    int counter;

    counter = 0;
    while (str[counter] != '\0')
    {
        if(str[counter] < 97 || str[counter] > 122)
        {
            return (0);
        }
        counter++;
    }
    return (1);
}

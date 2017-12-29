char *ft_strcapitalize(char *str)
{
    int counter;
    int counter2;

    counter = 0;
    counter2 = 0;
    while (str[counter] != '\0')
    {
        while (str[counter2] != '\0')
        {
            if (str[counter2] > 64 && str[counter2] < 91)
            {
                str[counter2] = str[counter2] + 32;
            }
            counter2++;
        }
        if ((str[counter - 1] < 65 ||
             (str[counter - 1] > 90 && str[counter - 1] < 97) ||
             str[counter - 1] > 122) &&
            (str[counter] > 96 && str[counter] < 123))
        {
            str[counter] = str[counter] - 32;
        }
        counter++;
    }
    return (str);
}

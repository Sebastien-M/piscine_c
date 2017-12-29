int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int counter;

    counter = 0;
    while (counter <= n)
    {
        if (s1[counter] == '\0' && s2[counter] == '\0')
        {
            return (0);
        }
        else if (s1[counter] > s2[counter])
        {
            return (1);
        }
        else if (s1[counter] < s2[counter])
        {
            return (-1);
        }
        counter++;
    }
    return (0);
}

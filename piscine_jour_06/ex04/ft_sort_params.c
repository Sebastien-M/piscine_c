
int ft_putchar(char c);

int ft_strcmp(char *s1, char *s2)
{
    int i;
    i = 0;
    while (s1[i] && s2[i] && s1[i] == s2[i])
    {
        i++;
    }
    return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void ft_swap(char **a, char **b)
{
    char *tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

void print_result(int argc, char **argv)
{
    int counter;
    int counter2;

    counter = 1;
    counter2 = 0;
    while (counter < argc)
    {
        counter2 = 0;
        while (argv[counter][counter2] != '\0')
        {
            ft_putchar(argv[counter][counter2]);
            counter2++;
        }
        ft_putchar('\n');
        counter++;
    }
}

int main(int argc, char **argv)
{
    int counter;

    counter = 1;
    counter = 0;
    while (counter < argc - 1)
    {
        if (ft_strcmp(argv[counter], argv[counter + 1]) > 0)
        {
            ft_swap(&argv[counter], &argv[counter + 1]);
            counter = 1;
        }
        else
        {
            counter++;
        }
    }
    print_result(argc, argv);
    return (0);
}
int ft_putchar(char c);
int main(int argc, char **argv)
{
    int counter;
    int counter3;

    counter = 1;
    counter3 = 0;
    while (counter <= argc)
    {
        while (argv[counter] != '\0')
        {
            counter3 = 0;
            while (argv[counter][counter3] != '\0')
            {
                ft_putchar(argv[counter][counter3]);
                counter3++;
            }
            counter++;
            ft_putchar('\n');
        }
        counter++;
    }
}

int ft_putchar(char c);
int main(int argc, char **argv)
{
    int counter;
    int counter3;

    counter = argc;
    counter3 = 0;
    while (counter > 1)
    {
        counter3 = 0;
        while (argv[counter - 1][counter3] != '\0')
        {
            ft_putchar(argv[counter - 1][counter3]);
            counter3++;
        }
        ft_putchar('\n');
        counter--;
    }
}

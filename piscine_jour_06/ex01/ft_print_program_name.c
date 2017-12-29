int ft_putchar(char c);
int main(int argc, char **argv)
{
    int counter;

    counter = 0;
    while(argv[0][counter] != '\0')
    {
        ft_putchar(argv[argc - argc][counter]);
        counter ++;
    }
    ft_putchar('\n');
    return (0);
}

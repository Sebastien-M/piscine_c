#include "ft_putchar.c"

void ft_print_alphabet(void)
{
    char letter = 'a';
    while (letter <= 'z')
    {
        ft_putchar(letter);
        ++letter;
    }
}

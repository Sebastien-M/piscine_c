#include <unistd.h>

void ft_putchar(char character)
{
    write(1, &character, sizeof(character));
}
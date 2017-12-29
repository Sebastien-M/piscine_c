#include <unistd.h>

void ft_putchar(int letter)
{
    write(1, &letter, 1);
}
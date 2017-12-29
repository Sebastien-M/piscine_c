#include <unistd.h>

void ft_putchar(char number)
{
    write(1, &number, sizeof(number));
}
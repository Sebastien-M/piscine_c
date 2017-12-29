#include <unistd.h>
//writes to the standard output the argument of the function
void ft_putchar(int letter)
{
    write(1, &letter, sizeof(letter));
}
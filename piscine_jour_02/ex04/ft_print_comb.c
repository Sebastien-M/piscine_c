#include "ft_putchar.c"

void ft_print_comb(void)
{
    int numbers[3] = {'0', '1', '2'};

    while (numbers[0] <= '7')
    {
        while (numbers[1] <= '8')
        {
            while (numbers[2] <= '9')
            {
                if ((numbers[0] < numbers[1]) && (numbers[1] < numbers[2]))
                {
                    ft_putchar(numbers[0]);
                    ft_putchar(numbers[1]);
                    ft_putchar(numbers[2]);

                    if ((numbers[0] == '7') && (numbers[1] == '8') && (numbers[2] == '9'))
                    {ft_putchar('\n');}
                    else
                    {
                        ft_putchar(',');
                        ft_putchar(' ');
                    }
                }
                numbers[2]++;
            }
            numbers[2] = '0';
            numbers[1]++;
        }
        numbers[1] = '1';
        numbers[0]++;
    }
}
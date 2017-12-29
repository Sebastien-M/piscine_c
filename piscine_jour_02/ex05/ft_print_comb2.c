#include "ft_putchar.c"

void ft_print_comb2(void)
{
    int numbers_one[2] = {'0', '0'};
    int numbers_two[2] = {'0', '0'};
    while (numbers_one[0] <= '9')
    {
        while (numbers_one[1] <= '9')
        {
            //---------------Right Tab-------------------
            while (numbers_two[0] <= '9')
            {
                while (numbers_two[1] <= '9')
                {
                    if ((numbers_one[0] == numbers_two[0] && numbers_one[1] == numbers_two[1]) ||
                        (numbers_one[0] > numbers_two[0]) ||
                        (numbers_one[0] == numbers_two[0] && numbers_one[1] > numbers_two[1])
                        )
                    {
                    }
                    else
                    {
                        ft_putchar(numbers_one[0]);
                        ft_putchar(numbers_one[1]);
                        ft_putchar(' ');
                        ft_putchar(numbers_two[0]);
                        ft_putchar(numbers_two[1]);
                        ft_putchar(',');
                        ft_putchar(' ');
                    }
                    numbers_two[1]++;
                }
                numbers_two[1] = '0';
                numbers_two[0]++;
            }
            //---------------Right Tab End-------------------
            numbers_two[0] = '0';
            numbers_two[1] = '0';
            numbers_one[1]++;
        }
        numbers_one[1] = '0';
        numbers_one[0]++;
    }
}

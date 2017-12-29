#include "ft_stock_par.h"
#include <unistd.h>

int ft_putchar(char c);
void ft_putstr(char *str);
void ft_putnbr(int n);

void ft_show_tab(struct s_stock_par *par)
{
    t_stock_par *stru;
    int counter;
    int counter2;

    counter2 = 0;
    counter = 0;
    stru = par;

    while (stru[counter].str != 0)
    {
        ft_putstr("param : ");
        ft_putstr(stru[counter].copy);
        ft_putstr("\n");
        ft_putstr("size : ");
        ft_putnbr(stru[counter].size_param);
        ft_putstr("\n");
        // ft_putstr("words : ");
        // counter2 = 0;
        // while(stru[counter].tab[counter2+1] != '\0')
        // {
        //     ft_putstr("\t");
        //     ft_putstr(stru[counter].tab[counter2]);
        //     counter2 ++;
        // }
        counter++;
    }
}

void ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
}

int ft_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}
void ft_putnbr(int n)
{
    if (n == -2147483648)
        ft_putstr("-2147483648");
    else
    {
        if (n < 0)
        {
            ft_putchar('-');
            n *= -1;
        }
        if (n >= 10)
            ft_putnbr(n / 10);
        ft_putchar((n % 10) + '0');
    }
}
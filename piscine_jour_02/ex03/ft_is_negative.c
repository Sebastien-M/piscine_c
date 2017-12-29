#include "ft_putchar.c"

void ft_is_negative(char n){
    if(n < 0){
        ft_putchar('N');
    }
    else if(n > 0 || n == 0){
        ft_putchar('P');
    }
}
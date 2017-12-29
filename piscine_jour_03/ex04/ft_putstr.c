#include <unistd.h>

int ft_putchar(char c);

void ft_putstr(char *str){
    int count;
    count=0;
    
    while(str[count] != '\0'){
        ft_putchar(str[count]);
        count++;
    }
}

int ft_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}
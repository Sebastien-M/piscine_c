#include <stdio.h>

int ft_str_is_numeric(char *str);
int main()
{
    char num[] = "8234";
    char num1[] = "36a";
    char num2[] = "@@2";
    char num3[] = "";

    printf("%d\n", ft_str_is_numeric(num));
    printf("%d\n", ft_str_is_numeric(num1));
    printf("%d\n", ft_str_is_numeric(num2));
    printf("%d\n", ft_str_is_numeric(num3));
    return (0);
}
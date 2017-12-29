#include <stdio.h>

int ft_str_is_printable(char *str);
int main()
{
    char str[] = "aodsoeu";
    char str1[] = "**093QQJ";
    char str2[] = "KLSFJD";
    char str3[] = "\n";
    char str4[] = "\t";

    printf("%d\n", ft_str_is_printable(str));
    printf("%d\n", ft_str_is_printable(str1));
    printf("%d\n", ft_str_is_printable(str2));
    printf("%d\n", ft_str_is_printable(str3));
    printf("%d\n", ft_str_is_printable(str4));
    return (0);
}

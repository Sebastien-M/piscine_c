#include <stdio.h>

int ft_str_is_uppercase(char *str);
int main()
{
    char str[] = "aodsoeu";
    char str1[] = "**093QQJ";
    char str2[] = "KLSFJD";
    char str3[] = "abc";
    char str4[] = "";

    printf("%d\n", ft_str_is_uppercase(str));
    printf("%d\n", ft_str_is_uppercase(str1));
    printf("%d\n", ft_str_is_uppercase(str2));
    printf("%d\n", ft_str_is_uppercase(str3));
    printf("%d\n", ft_str_is_uppercase(str4));
    return (0);
}

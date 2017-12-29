#include <stdio.h>

int ft_str_is_lowercase(char *str);
int main()
{
    char str[] = "aodsoeu";
    char str1[] = "**093QQJ";
    char str2[] = "KLSFJD";
    char str3[] = "abc";
    char str4[] = "";

    printf("%d\n", ft_str_is_lowercase(str));
    printf("%d\n", ft_str_is_lowercase(str1));
    printf("%d\n", ft_str_is_lowercase(str2));
    printf("%d\n", ft_str_is_lowercase(str3));
    printf("%d\n", ft_str_is_lowercase(str4));
    return (0);
}
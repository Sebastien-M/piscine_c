#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);
int main()
{
    char str1[] = "abcdef";
    char str2[] = "abcdef";
    char str3[] = "abcdefg";
    char str4[] = "abcdef";
    char str5[] = "ab";
    char str6[] = "aba";
    char str7[] = "ab";
    char str8[] = "";
    char str9[] = "";
    char str10[] = "ba";

    printf("%d\n", ft_strncmp(str1, str2, 12));//should be equal
    printf("%d\n", ft_strncmp(str3, str4, 6)); //should be superior
    printf("%d\n", ft_strncmp(str5, str6, 0)); //should be equal
    printf("%d\n", ft_strncmp(str7, str8, 1)); //should be superior
    printf("%d\n", ft_strncmp(str9, str10, 1)); //should be inferior
    return (0);
}

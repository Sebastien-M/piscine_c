#include <stdio.h>

int ft_strcmp(char *s1, char *s2);
int main()
{
    char test[] = "abcdefgh";
    char test2[] = "abcdefghi";
    char test3[] = "yest";
    char test4[] = "test";
    char test5[] = "abc";
    char test6[] = "abcd";
    char test7[] = "abcd";
    char test8[] = "abcd";
    char test9[] = "";
    char test10[] = "";
    char test11[] = "";
    char test12[] = "a";

    printf("%d\n", ft_strcmp(test, test2)); //should be inferior
    printf("%d\n", ft_strcmp(test3, test4));//should be superior
    printf("%d\n", ft_strcmp(test5, test6));//should be inferior
    printf("%d\n", ft_strcmp(test7, test8));//should be equal
    printf("%d\n", ft_strcmp(test9, test10));//should be equal
    printf("%d\n", ft_strcmp(test11, test12));//should be inferior
    return (0);
}

#include <stdio.h>

int ft_str_is_alpha(char *str);
int main()
{
    char test[] = "fullalphabeticalphrase";
    char test1[] = "fullalphabeticalphrasebutwitha@";
    char test2[] = "";

    printf("%s : %d\n", test, ft_str_is_alpha(test));
    printf("%s : %d\n", test1, ft_str_is_alpha(test1));
    printf("%s : %d\n", test2, ft_str_is_alpha(test2));
    return (0);
}
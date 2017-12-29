#include <stdio.h>

char *ft_strupcase(char *str);
int main()
{
    char word[] = "test";
    char word1[] = "TeSt";
    char word2[] = "Bla bla bla blip, bloup";

    printf("%s\n", ft_strupcase(word));
    printf("%s\n", ft_strupcase(word1));
    printf("%s\n", ft_strupcase(word2));
    return (0);
}
#include <stdio.h>

char *ft_strlowcase(char *str);
int main()
{
    char word[] = "AAAAAAAAAAAAA";
    char word1[] = "TeSt";
    char word2[] = "BlA@ bla bla Bliiiip, //A/'";

    printf("%s\n", ft_strlowcase(word));
    printf("%s\n", ft_strlowcase(word1));
    printf("%s\n", ft_strlowcase(word2));
    return (0);
}
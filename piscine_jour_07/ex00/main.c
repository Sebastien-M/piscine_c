#include <stdio.h>

char *ft_strdup(char *src);
int main()
{
    char str[] = "bb";
    char str1[] = "bb";
    char str2[] = "ihjh";

    printf("%s\n", ft_strdup(str));
    printf("%s\n", ft_strdup(str1));
    printf("%s\n", ft_strdup(str2));
    
}
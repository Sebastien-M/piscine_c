#include <stdio.h>

char *ft_strcat(char *dest, char *src);
int main ()
{
    char src[] = "bloup";
    char dest[] = "blip";
    char src2[] = "";
    char dest2[] = "apo889>4";
    char src3[] = "blabla";
    char dest3[] = "a";

    printf("%s\n", ft_strcat(dest, src));
    printf("%s\n", ft_strcat(dest2, src2));
    printf("%s\n", ft_strcat(dest3, src3));
    return (0);
}

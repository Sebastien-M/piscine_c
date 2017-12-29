#include <stdio.h>

char *ft_strncat(char *dest, char *src, int nb);
int main()
{
    char src[] = "bloup";
    char dest[] = "blip";
    char src2[] = "";
    char dest2[] = "apo889>4";
    char src3[] = "blabla";
    char dest3[] = "";

    printf("%s\n", ft_strncat(dest, src, 2));
    printf("%s\n", ft_strncat(dest2, src2, 2));
    printf("%s\n", ft_strncat(dest3, src3, 2));
    return (0);
}

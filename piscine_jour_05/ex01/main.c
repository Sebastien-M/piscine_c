#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main()
{
    //Test1
    unsigned int size;
    char src[64] = "test";
    char dest[64];

    size = 2;
    ft_strncpy(dest, src, size);
    printf("Copied string(test1 with %d characters) : %s\n", size, dest);

    //Test2
    unsigned int size2;
    char src2[64] = "Example sentence";
    char dest2[64];
    
    size2 = 1;
    ft_strncpy(dest2, src2, size2);
    printf("Copied string(test2 with %d characters) : %s\n", size2, dest2);

    //Test2
    unsigned int size3;
    char src3[64] = "Example sentence";
    char dest3[64];
    
    size3 = 0;
    ft_strncpy(dest3, src3, size3);
    printf("Copied string(test2 with %d characters) : %s\n", size3, dest3);
    return (0);
}
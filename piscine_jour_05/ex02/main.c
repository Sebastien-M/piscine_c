#include <stdio.h>

char *ft_strstr(char *str, char *to_find);

int main()
{
    // Test1
    char sentence[] = "The word to find is : bloup";
    char to_find[] = "bloup";

    printf("%s\n", ft_strstr(sentence, to_find));
    // Test2
    char sentence2[] = "blabloblibloblu";
    char to_find2[] = "test";

    printf("%s\n", ft_strstr(sentence2, to_find2));
    // Test3
    char sentence3[] = "blabloblibloblu";
    char to_find3[] = "ob";

    printf("%s\n", ft_strstr(sentence3, to_find3));
    return (0);
}

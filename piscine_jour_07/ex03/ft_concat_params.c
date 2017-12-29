#include <stdlib.h>
#include <stdio.h>

char *ft_concat_params(int argc, char **argv)
{
    char *str;
    int i;
    int j;
    int k;

    i = 1;
    j = 0;
    k = 0;
    str = (char *)malloc(sizeof(char) * argc);
    while (i < argc)
    {
        j = 0;
        while (argv[i][j])
        {
            if (j == 0)
            {
                str[k] = '\n';
                k++;
            }
            str[k] = argv[i][j];
            k++;
            j++;
        }
        i++;
    }
    str[k + 1] = '\0';
    return (str);
}

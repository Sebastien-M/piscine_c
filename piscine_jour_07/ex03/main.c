#include <stdio.h>
#include <unistd.h>

char *ft_concat_params(int argc, char **argv);
void display_array(char *array);

int main(int argc, char **argv)
{
    char *str;
    str = ft_concat_params(argc, argv);
    printf("%s\n", str);
}

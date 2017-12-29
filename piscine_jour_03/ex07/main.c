#include <stdio.h>
char *ft_strrev(char *str);

int main(){
    char text_example[]="abcd";
    char *result;
    result = ft_strrev(text_example);
    printf("%c",*result++);
    printf("\n");
    return 0;
}
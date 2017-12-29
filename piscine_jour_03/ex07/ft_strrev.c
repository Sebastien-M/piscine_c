#include <stdio.h>

int length(char *str);

char *ft_strrev(char *str){
    int size;
    size = length(str);

    char *original_str;
    original_str = str;
    size--;
    int counter;
    counter = 0;
    while(size != 0){
        str[size] = original_str[counter];
        size--;
        counter++;
    }
    return str;
}

int length(char *str){
    int counter;
    counter = 0;

    while(str[counter] != '\0'){
        counter ++;
    }

    return counter;
}


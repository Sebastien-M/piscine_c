#include <stdlib.h>
// #include <stdio.h>

int *ft_range(int min, int max)
{
    int *results;
    int counter;
    
    counter = 0;
    if (min >= max)
    {
        return (0);
    }
    results = (int*)malloc(sizeof(int) * (max - min));
    while (min < max)
    {
        results[counter] = min;
        min++;
        counter++;
    }
    return (results);
}

#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max);
void display_array(int array[], int size);

int main()
{
    int *arr;
    int range;

    arr = 0;
    range = ft_ultimate_range(&arr, 1, 20);
    printf("%d\n", range);
    display_array(arr, range);
}

void display_array(int array[], int size)
{
    int counter;

    counter = 0;
    printf("\n");
    while (counter < size)
    {
        printf("%d\n", array[counter]);
        counter++;
    }
}
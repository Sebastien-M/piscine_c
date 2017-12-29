
void ft_ultimate_div_mod(int *a, int *b)
{
    int division;

    division = *a / *b;
    *b = *a % *b;
    *a = division;
}
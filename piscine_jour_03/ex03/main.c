
void ft_ultimate_div_mod(int *a, int *b);

int main()
{
    int nbr_one;
    int nbr_two;

    nbr_one = 4;
    nbr_two = 2;

    int *a;
    int *b;

    a = &nbr_one;
    b = &nbr_two;

    ft_ultimate_div_mod(a, b);
}
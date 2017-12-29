
void ft_div_mod(int a, int b, int *div, int *mod);

int main()
{
    int div;
    int mod;
    int *div_ptr;
    int *div_mod;

    div_ptr = &div;
    div_mod = &mod;

    ft_div_mod(4, 2, div_ptr, div_mod);
    return 0;
}
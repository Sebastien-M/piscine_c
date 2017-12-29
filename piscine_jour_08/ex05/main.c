#include "ft_stock_par.h"

int main(int argc,char** argv)
{
    t_stock_par *stru;
    stru = ft_param_to_tab(argc, argv);
    ft_show_tab(stru);
    return (0);
}
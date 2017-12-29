#include "ft_stock_par.h"
#include <stdio.h>
#include <stdlib.h>

struct s_stock_par *ft_param_to_tab(int ac, char **av)
{
    t_stock_par *stru;
    int counter;

    stru = (t_stock_par *)malloc(sizeof(t_stock_par) * (ac + 1));
    counter = 0;
    while (counter < ac)
    {
        stru[counter].size_param = param_len(av[counter]);
        stru[counter].str = av[counter];
        stru[counter].copy = ft_strdup(av[counter]);
        stru[counter].tab = ft_split_whitespaces(av[counter]);
        counter++;
    }
    stru[counter].str = 0;
    return (stru);
}

int param_len(char *param)
{
    int counter;

    counter = 0;
    while (param[counter] != '\0')
    {
        counter++;
    }
    return (counter);
}

#include <stdio.h>
#include "ft_stock_par.h"

int main(int argc,char** argv)
{
	t_stock_par* stru;
	stru = ft_param_to_tab(argc,argv);
	printf("%s\n", stru[0].copy);
	printf("%d\n", stru[0].size_param);
	printf("%s\n", stru[1].copy);
	printf("%d\n", stru[1].size_param);
	return (0);
}
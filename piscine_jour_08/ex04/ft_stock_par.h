#ifndef __FT_STOCK_PAR_H_
#define __FT_STOCK_PAR_H_
typedef struct s_stock_par
{
    int size_param;
    char *str;
    char *copy;
    char **tab;
} t_stock_par;
int param_len(char *param);
void add_param(char *param, int argc, t_stock_par *structure);
char *ft_strcpy(char *dest, char *src);
char **ft_split_whitespaces(char *str);
char *ft_strdup(char *src);
struct s_stock_par *ft_param_to_tab(int ac, char **av);

#endif
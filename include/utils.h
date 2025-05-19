#include "linked_list.h"

#ifndef UTILS_H
# define UTILS_H

void printf_ll(t_linked_list *h);
t_linked_list *get_input(int ac, char **av);
int str_to_int(char *str);
int get_min(t_linked_list *stack);
#endif

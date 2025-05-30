#include "stacks.h"

#ifndef UTILS_H
# define UTILS_H

void printf_ll(t_linked_list *h);
t_linked_list *get_input(int ac, char **av);
int str_to_int(char *str);
int get_min(t_linked_list *stack);
void free_all(t_stacks *stacks);
t_stacks *push_to_a(t_stacks *stacks);
int a_is_sorted(t_stacks *stacks);
int get_linked_list_len(t_linked_list *lst);
char *get_bin_v(int n);

#endif

#include "stacks.h"

int a_is_sorted(t_stacks *stacks) {
    t_linked_list *tmp = stacks->l_a;

    while (tmp->next) {
        if (tmp->v > tmp->next->v) {
            return 0;
        }
        tmp = tmp->next;
    }
    return 1;
}

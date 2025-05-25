#include "linked_list.h"

int get_min(t_linked_list *stack) {
    t_linked_list *cur = stack;
    int min = cur->v;

    while(cur) {
        if (cur->v < min) min = cur->v;
        cur = cur->next;
    }

    return min;
}

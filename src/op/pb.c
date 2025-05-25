#include <stdlib.h>
#include <stdio.h>

#include "stacks.h"

t_stacks *pb(t_stacks *stacks) {
    if (!stacks || !stacks->l_a)
        return stacks;

    t_linked_list *new_l_a = stacks->l_a->next;

    if (stacks->l_b == NULL) {
        stacks->l_b = stacks->l_a;
        stacks->l_b->next = NULL;
    } else {
        t_linked_list *new = stacks->l_a;
        stacks->l_a->next = stacks->l_b;
        stacks->l_b = new;
    }

    stacks->l_a = new_l_a;

    printf("pb\n");

    return stacks;
}

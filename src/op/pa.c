#include <stdlib.h>
#include <stdio.h>

#include "stacks.h"

t_stacks *pa(t_stacks *stacks) {
    if (!stacks || !stacks->l_b)
        return stacks;

    t_linked_list *new_l_b = stacks->l_b->next;

    if (stacks->l_a == NULL) {
        stacks->l_a = stacks->l_b;
        stacks->l_a->next = NULL;
    } else {
        t_linked_list *new = stacks->l_b;
        new->next = stacks->l_a;

        stacks->l_a = new;
    }

    stacks->l_b = new_l_b;

    printf("pa\n");

    return stacks;
}

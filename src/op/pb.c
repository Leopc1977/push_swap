#include <stdlib.h>
#include <stdio.h>

#include "stacks.h"

t_stacks *pb(t_stacks *stacks) {
    if (stacks->l_b == NULL) {
        stacks->l_b = malloc(sizeof(t_linked_list));
        stacks->l_b->v = stacks->l_a->v;
        stacks->l_b->next = NULL;
    } else {
        t_linked_list *new = malloc(sizeof(t_linked_list));
        new->v = stacks->l_a->v;
        new->next = stacks->l_b;
        stacks->l_b = new;
    }

    stacks->l_a = stacks->l_a->next;

    printf("pb\n");

    return stacks;
}

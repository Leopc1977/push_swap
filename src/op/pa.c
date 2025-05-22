#include <stdlib.h>
#include <stdio.h>

#include "stacks.h"

t_stacks *pa(t_stacks *stacks) {
    if (stacks->l_a == NULL) {
        stacks->l_a = malloc(sizeof(t_linked_list));
        stacks->l_a->v = stacks->l_b->v;
        stacks->l_a->next = NULL;
    } else {
        t_linked_list *new = malloc(sizeof(t_linked_list));
        new->v = stacks->l_b->v;
        new->next = stacks->l_a;
        stacks->l_a = new;
    }

    stacks->l_b = stacks->l_b->next;

    printf("pa\n");

    return stacks;
}

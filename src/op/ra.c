#include <stdlib.h>
#include <stdio.h>

#include "stacks.h"

t_stacks *ra(t_stacks *stacks) {
    t_linked_list *first = stacks->l_a;
    t_linked_list *new_head = first->next;
    t_linked_list *last = new_head;

    while (last->next != NULL) last = last->next;

    last->next = first;
    stacks->l_a = new_head;
    first->next = NULL;

    printf("ra\n");

    return stacks;
}

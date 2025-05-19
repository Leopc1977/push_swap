#include <stdlib.h>
#include <stdio.h>

#include "linked_list.h"

t_linked_list *ra(t_linked_list *l_a) {
    t_linked_list *new_head = l_a->next;
    l_a->next = NULL;

    t_linked_list *last = l_a;

    while (last->next != NULL) last = last->next;
    last->next = l_a;

    printf("ra\n");

    return new_head;
}

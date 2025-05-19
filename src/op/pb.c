#include <stdlib.h>
#include <stdio.h>

#include "linked_list.h"

t_linked_list *pb(t_linked_list *l_a, t_linked_list *l_b) {
    if (l_b == NULL) {
        l_b = malloc(sizeof(t_linked_list));
        l_b->v = l_a->v;
        l_b->next = NULL;
    } else {
        t_linked_list *new = malloc(sizeof(t_linked_list));
        new->v = l_a->v;
        new->next = l_b;
        l_b = new;
    }

    printf("pb\n");

    return l_b;
}

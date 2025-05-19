#include <stdio.h>

#include "linked_list.h"

void printf_ll(t_linked_list *h) {
    t_linked_list *current = h;

    while(current) {
        printf("%d ", current->v);
        current = current->next;
    }

    printf("\n");
}

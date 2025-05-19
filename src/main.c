#include <stdio.h> 
#include <stdlib.h>
#include "linked_list.h"
#include "utils.h"
#include "op.h"

int main(int ac, char **av) {
    if (ac < 2) {
        printf("Usage: %s <filename>\n", av[0]);
        return 1;
    }

    t_linked_list *l_a = get_input(ac, av);
    t_linked_list *l_b = NULL;

    while (l_a) {
        int cur_min = get_min(l_a);

        if (l_a->v != cur_min) {
            l_a = ra(l_a);
        }
        if (l_a->v == cur_min) {
            l_b = pb(l_a, l_b);
            l_a = l_a->next;
        }
    }

    while (l_b) {
        l_a = pb(l_b, l_a);
        l_b = l_b->next;
    }

    return 0;
}

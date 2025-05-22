#include <stdio.h> 
#include <stdlib.h>

#include "stacks.h"
#include "utils.h"
#include "op.h"

int main(int ac, char **av) {
    int count_op = 0;
    if (ac < 2) {
        printf("Usage: ./push_swap <numbers>\n");
        return 1;
    }

    t_stacks *stacks = malloc(sizeof(t_stacks));
    stacks->l_a = get_input(ac, av);
    stacks->l_b = NULL;

    if (a_is_sorted(stacks)) {
        free_all(stacks);
        return 0;
    }

    while (stacks->l_a) {
        int cur_min = get_min(stacks->l_a);

        if (stacks->l_a->v != cur_min) {
            stacks = ra(stacks);
            count_op++;
        }
        else if (stacks->l_a->v == cur_min) {
            stacks = pb(stacks);
            count_op++;
        }
    }

    push_to_a(stacks);

    printf("count_op: %d\n", count_op);
    t_linked_list *tmp = stacks->l_a;
    while (tmp) {
        printf("[%d] ", tmp->v);
        tmp = tmp->next;
    }
    printf("\n");
    
    free_all(stacks);

    return 0;
}

#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

#include "stacks.h"
#include "utils.h"
#include "op.h"

int main(int ac, char **av) {
    if (ac < 2) {
        printf("Usage: ./push_swap <numbers>\n");
        return 1;
    }

    t_stacks *stacks = malloc(sizeof(t_stacks));
    if (stacks == NULL) return 1;

    stacks->l_a = get_input(ac, av);
    if (stacks->l_a == NULL) return NULL;
    stacks->l_b = NULL;

    int list_len = get_linked_list_len(stacks->l_a);
    int max_bin_len = strlen(get_bin_v(list_len));

    if (a_is_sorted(stacks)) {
        free_all(stacks);
        return 0;
    }

    for (int i = 0; i < max_bin_len && !a_is_sorted(stacks); i++) {
        t_linked_list *cur_linked_list = stacks->l_a;

        for (int j = 0; j < list_len; j++) {
            t_linked_list *next = cur_linked_list->next;
            int cur_bin_v = 0;
            int cur_bin_len = (int)strlen(cur_linked_list->bin_v);

            if (cur_bin_len > i) {
                cur_bin_v = cur_linked_list->bin_v[cur_bin_len - 1 - i] - '0';
            }

            if (cur_bin_v == 0) {
                stacks = pb(stacks);
            } else {
                stacks = ra(stacks);
            }

            cur_linked_list = next;
        }

        stacks = push_to_a(stacks);
    }
    
    free_all(stacks);

    return 0;
}

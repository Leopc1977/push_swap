#include <stdlib.h>

#include "linked_list.h"
#include "utils.h"

t_linked_list *get_input(int ac, char **av) {
    t_linked_list* h_input = malloc(sizeof(t_linked_list));
    t_linked_list* c_input = h_input;

    h_input->v = str_to_int(av[1]);
    h_input->next = NULL;

    for (int i = 2; i < ac; i++) {
        t_linked_list *new = malloc(sizeof(t_linked_list));
        new->v = str_to_int(av[i]);
        new->next = NULL;
        c_input->next = new;
        c_input = new;
    }

    return h_input;
}

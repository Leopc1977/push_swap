#include <stdlib.h>
#include <stdio.h>
#include "linked_list.h"
#include "utils.h"

typedef struct {
    int value;
    int init_pos;
} t_input;

int compare(const void *a, const void *b) {
    return (*(t_input*)a).value - (*(t_input*)b).value;
}

t_linked_list *get_input(int ac, char **av) {
    t_linked_list* h_input = malloc(sizeof(t_linked_list));
    t_linked_list* c_input = h_input;

    t_input *input = malloc(sizeof(t_input) * (ac - 1));
    int i = 0;

    while (i < ac - 1) {
        input[i].value = str_to_int(av[i + 1]);
        input[i].init_pos = i;
        i++;
    }

    qsort(input, ac - 1, sizeof(t_input), compare);

    h_input->v = input[0].init_pos;
    h_input->next = NULL;

    for (int i = 2; i < ac; i++) {
        t_linked_list *new = malloc(sizeof(t_linked_list));

        new->v = input[i - 1].init_pos;
        new->next = NULL;

        c_input->next = new;
        c_input = new;
    }

    return h_input;
}

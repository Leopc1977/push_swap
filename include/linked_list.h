#ifndef LINKED_LIST_H
# define LINKED_LIST_H

typedef struct s_linked_list {
    int v;
    char *bin_v;
    struct s_linked_list* next;
} t_linked_list;    

#endif

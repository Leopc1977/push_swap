#include "stdlib.h"

#include "linked_list.h"

int get_linked_list_len(t_linked_list *lst) {
    t_linked_list *cur = lst;
    int len = 0;

    while (cur != NULL) {
        len++;
        cur = cur->next;
    }
    
    return len;
}

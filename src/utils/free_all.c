#include <stdlib.h>

#include "stacks.h"

void free_all(t_stacks *stacks) {
   t_linked_list* tmp;

   while (stacks->l_a != NULL) {
      tmp = stacks->l_a;
      stacks->l_a = stacks->l_a->next;
      free(tmp->bin_v);
      free(tmp);
   }

   while (stacks->l_b != NULL) {
      tmp = stacks->l_b;
      stacks->l_b = stacks->l_b->next;
      free(tmp->bin_v);
      free(tmp);
   }

   free(stacks->l_a);
   free(stacks->l_b);
   free(stacks);
}

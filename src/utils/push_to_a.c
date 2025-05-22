#include "stacks.h"
#include "op.h"

void push_to_a(t_stacks *stacks) {
    while (stacks->l_b) {
        stacks = pa(stacks);
    }
}

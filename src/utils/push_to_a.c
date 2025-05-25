#include "stacks.h"
#include "op.h"
#include "utils.h"
#include <stdio.h>

t_stacks *push_to_a(t_stacks *stacks) {
    while (stacks->l_b) {
        stacks = pa(stacks);
    }

    return stacks;
}

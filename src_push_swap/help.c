#include "push_swap.h"

int     m_small(t_pile *pile, int m)
{
    t_lst   *tmp;

    if (pile->a == NULL)
        return (0);
    tmp = pile->a;
    while (tmp != NULL)
    {
        if (tmp->n <= m)
            return (1);
        tmp = tmp->next;
    }
    return (0);
}

int     m_big